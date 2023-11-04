#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int prime(int n)
{
	int s = sqrt(n);
	for(int i = 2; i <= s; i++)
		if(n%i == 0)
			return false;
	return n > 1;
}

void f(long long fibo[])
{
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < 92; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}		
}

int fibonacci(int n, long long fibo[])
{
	for(int i = 0; i < 92; i++)
		if(n == fibo[i])
			return 1;
	return 0;
}

int check(int n, long long fibo[])
{
	int sum = 0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	if(fibonacci(sum, fibo))
		return 1;
	else
		return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	long long fibo[92];
	f(fibo);
	int a = 0, b = 0;
		scanf("%d%d", &a, &b);
	if(a > b)
		swap(&a, &b);
	for(int i = a; i <= b; i++)
		if(prime(i) && check(i, fibo))
			printf("%d ", i);
	return 0;
}
