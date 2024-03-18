#include<stdio.h>

int factorial(int n)
{
	int f = 1;
	for(int i = n; i > 0; i--)
		f*=i;
	return f;
}

int strong(int n)
{
	int digit = 0, sum = 0;
	int temp = n;
	while(n != 0)
	{
		digit = n % 10;
		sum += factorial(digit);
		n /= 10;
	}
	if(sum == temp)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++)
	{
		if(strong(i))
			printf("%d ", i);
	}
	return 0;
}
		

