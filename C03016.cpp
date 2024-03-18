#include<stdio.h>

int check(long long n)
{
	if(n == 0 || n == 1)
		return 1;
	else	
		return check(n-1) + check(n-2);
}

int fibonacci(long long n)
{
	for(long long i = 0; i <= n; i++)
		if(check(i) == n)
			return 1;
	return 0;
	
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0;
			scanf("%lld", &n);
		if(n == 0)
			return 0;
		else
		{
			if(fibonacci(n))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
