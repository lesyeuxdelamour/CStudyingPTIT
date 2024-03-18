#include<stdio.h>

void f(long long fibo[])
{
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < 92; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}		
}

int fibonacci(long long n, long long fibo[])
{
	for(int i = 0; i < 92; i++)
		if(n == fibo[i])
			return 1;
	return 0;
}

int main()
{
	long long fibo[92];
	f(fibo);
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0;
			scanf("%lld", &n);
		if(fibonacci(n, fibo))
			printf("YES\n");
		else	
			printf("NO\n");	
	}
	return 0;
}
