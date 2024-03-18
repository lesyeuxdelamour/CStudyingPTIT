#include<stdio.h>

int perfect(int n)
{
	int sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(n%i == 0)
			sum+=i;
	}
	if(sum == n)
		return 1;
	else
		return 0;
}

int main()
{
	int a = 0, b = 0, count = 0;
		scanf("%d%d", &a, &b);
	if(a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for(int i = a; i <= b; i++)
	{
		if(perfect(i))
			printf("%d ", i);
	}
	return 0;
}
		

