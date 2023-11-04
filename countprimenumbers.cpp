#include<stdio.h>

int prime(int n)
{
	for(int i = 2; i*i <= n; i++)
		if(n%i == 0)
			return 0;	
	return n > 1;
}

int primedigit(int n)
{
	while(n)
	{
		int d = n%10;
		if(prime(d))
			n/=10;
		else
			return 0;
	}
	return 1;
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int a, b, count = 0;
			scanf("%d%d", &a, &b);
		for(int i = a; i <= b; i++)
			if(prime(i) && primedigit(i))
				count++;
		printf("%d\n", count);
	}
	return 0;
}
