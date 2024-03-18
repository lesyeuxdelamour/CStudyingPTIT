#include<stdio.h>
#include<math.h>

long long maxprimedivisor(long long n, long long maxPrimeFac)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		while(n%i == 0)
		{
			maxPrimeFac = i;
			n/=i;
		}
	}
	if(n != 1)
		maxPrimeFac = n;
	return maxPrimeFac;
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0, maxPrimeFac = 0;
			scanf("%lld", &n);
			printf("%lld\n", maxprimedivisor(n, maxPrimeFac));
	}
	return 0;
}
