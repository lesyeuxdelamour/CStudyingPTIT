#include<stdio.h>

int prime(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i*i <= n; i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n = 2, t = 0, q = 0;
		scanf("%d", &t);
	while(q < t)
	{
		if(prime(n))
		{
			printf("%d\n", n);
			q++;
		}
		n++;
	}
}

