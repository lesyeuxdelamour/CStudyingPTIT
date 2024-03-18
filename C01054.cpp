#include <stdio.h>

typedef long long ll;

ll divisorSum(int n)
{
	ll sum = 0;
	for(int i = 2; i*i <= n; ++i)
	{
		while(n%i == 0)
		{
			sum += i;
			n /= i;
		}
	}
	if(n > 1)
		sum += n;
	return sum;
}

int main()
{
	int t;
	scanf("%d", &t);
	ll sum = 0;
	while(t--)
	{
		int n;
		scanf("%d", &n);
		sum += divisorSum(n);
	}
	printf("%lld", sum);
}