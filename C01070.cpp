#include <stdio.h>
#include <math.h>

int square(int n)
{
	int y = sqrt(n);
	if (y * y == n)
		return y;
	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int solve()
{
	int a, b, c, d, e, f;
		scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	int n = a*b+c*d+e*f;
	if(square(n) == 0)
	{
		return 0;
	}
	else
	{
		int y = square(n);
		if (a > b)
			swap(&a, &b); 
		if (c > d)
			swap(&c, &d);
		if (e > f)
			swap(&e, &f);
		if (b == d && d == f && f == y)
			return 1;
		else
		{
			if (d == y)
			{
				swap(&d, &b);
				swap(&c, &a);
			}
			if (f == y)
			{
				swap(&f, &b);
				swap(&e, &a);
			}
			if (b == y)
			{
				a = y - a;
				if (c == a && e == a || c == a && f == a || d == a && e == a || d == a && f == a)
					return 1;
				else
					return 0;
			}
			else
				return 0;
		}
	}
}

int main()
{
	if(solve() == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}
