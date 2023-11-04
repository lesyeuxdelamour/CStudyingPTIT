#include<stdio.h>

int perfect(int n)
{
	int sum = 0;
	if(n <= 0)
		return 0;
	else
	{
		for(int i = 1; i < n; i++)
		{
			if(n%i == 0)
				sum+=i;
		}
	}
	if(sum == n)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", perfect(n));
}

