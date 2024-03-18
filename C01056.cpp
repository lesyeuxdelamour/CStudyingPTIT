#include<stdio.h>

int nondecrease(long long n)
{
	int i, temp = 9;
	while(n != 0)
	{
		i = n%10;
		if(i <= temp)
		{
			temp = i;
			n/=10;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0;
			scanf("%lld", &n);
		if(nondecrease(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
}
