#include<stdio.h>

int factorial(int n)
{
	int f = 1;
	for(int i = n; i > 0; i--)
		f*=i;
	return f;
}

int main()
{
	int n = 0, digit = 0, sum = 0;
		scanf("%d", &n);
	int temp = n;
	do
	{
		digit = n % 10;
		sum += factorial(digit);
		n /= 10;
	}
		while(n != 0);
	if(sum == temp)
		printf("1");
	else
		printf("0");
}
