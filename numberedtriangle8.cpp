#include<stdio.h>

void triangle(int n)
{
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i%2 != 0)
		{
			for(int j = 0; j < i; j++)
			{
				count++;
				printf("%d ", count);
			}
		}
		else
		{
			count+=i;
			for(int j = 0; j < i; j++)
			{
				printf("%d ", count);
				count--;
			}
			count+=i;
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
		scanf("%d", &n);
	triangle(n);
}
