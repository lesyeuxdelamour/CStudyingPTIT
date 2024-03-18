#include<stdio.h>

int reverse(int n)
{
	int reverse = 0, remainder = 0;
	while (n != 0)
	{
	    remainder = n % 10;
	    reverse = reverse * 10 + remainder;
	    n /= 10;
  	}
	return reverse;
}

int palindromic(int n)
{
	if(n == reverse(n))
		return 1;
	else
		return 0;
}

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
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int a = 0, b = 0, count = 0;
			scanf("%d%d", &a, &b);
		for(int i = a; i <= b; i++)
		{
			if(palindromic(i) && prime(i))
			{
				printf("%d ", i);
				count++;
			}
			if(count == 10)
			{
				printf("\n");
				count = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
