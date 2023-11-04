#include<stdio.h>
#define max 100

void fibonacci(long long a[])
{
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		a[i] = a[i-1] + a[i-2];
	}		
}

int main()
{
	long long a[92];
	fibonacci(a);
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int n = 0;
			scanf("%d", &n);
		printf("%lld\n", a[n]);	
	}
}
