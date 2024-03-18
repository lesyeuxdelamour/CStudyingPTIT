#include<stdio.h>

int gcd(int a, int b) //Euclid Algorithms
{
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

int main()
{
	int t;
		scanf("%d", &t);
	while(t--)
	{
	int a = 0, b = 0;
		scanf("%d%d", &a, &b);
		printf("%d\n", gcd(a, b));
	}
	return 0;
}
