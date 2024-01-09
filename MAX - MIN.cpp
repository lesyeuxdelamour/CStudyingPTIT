#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
	int MAX = 0, MIN = 1e8;
	int n;
	while(scanf("%d", &n) == 1)
	{
		MAX = max(MAX, n);
		MIN = min(MIN, n);
	}
	printf("%d %d", MAX, MIN);
	return 0;
}