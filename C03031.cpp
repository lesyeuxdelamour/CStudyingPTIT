#include<stdio.h>
#include<stdbool.h>

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

bool gcdcheck(int a, int b, int c, int d)
{
	if(gcd(a, b) == gcd(c, d))
		return true;
	else
		return false;
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int a, b, c, d;
			scanf("%d%d%d%d", &a, &b, &c, &d);
		if(gcdcheck(a, b, c, d))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

