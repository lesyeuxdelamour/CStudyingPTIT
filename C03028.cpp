#include<stdio.h>

int factorial(int i)
{
	int f = 1;
	for(f = 1; i > 1; i--)
      	f*=i;
    return f;
}

int number(int a, int b)
{
	return factorial(a)/(factorial(a-b)*factorial(b));
}

int main()
{
	int n = 0;
		scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
			printf("%3d ", number(i, j));
		printf("\n");
	}
}


	

