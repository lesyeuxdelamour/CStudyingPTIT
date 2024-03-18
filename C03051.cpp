#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int prime(int n)
{
	if(n < 2)
		return 0;
	if(n == 2)
		return 1;
	if(n%2 == 0)
		return 0;
	for(int i = 3; i*i <= n; i+=2)
		if(n%i == 0)
			return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll a, b;
		scanf("%lld%lld", &a, &b);
		int sqrt_a = ceil(sqrt(a));  // làm tròn lên
		int sqrt_b = floor(sqrt(b)); // làm tròn xuống
		int cnt = 0;
		for(int i = sqrt_a; i <= sqrt_b; ++i)
			if(prime(i))
				cnt++;
 		printf("%d\n", cnt);
	}
	return 0;
}

