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
	int a = 0, b = 0;
		scanf("%d%d", &a, &b);
	if(a >= b)
		return 0;
	else
		for(int i = a; i < b; i++)
			for(int j = a+1; j < b+1; j++)
				if(gcd(i, j) == 1)
					printf("(%d,%d)\n", i, j);
	return 0;
}
