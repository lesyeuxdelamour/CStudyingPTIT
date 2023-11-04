#include<stdio.h>

int gcd(long a, long b)
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

int lcm(long a, long b)
{
	return (a*b)/gcd(a, b);
}

int main()
{
	long a = 0, b = 0;
		scanf("%ld %ld", &a, &b);
		printf("%ld\n%ld", gcd(a, b), lcm(a, b));
}

