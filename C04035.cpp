#include <stdio.h>

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int n;
	scanf("%d", &n);
	int sumU = 0, sumD = 0;
	int minU = 50001, minD = 50001;
	for(int i = 0; i < n; ++i)
	{
		int u, d;
		scanf("%d%d", &u, &d);
		sumU += u;
		sumD += d;
		minU = min(minU, u);
		minD = min(minD, d);
	}
	sumU += minD;
	sumD += minU;
	printf("%d", sumU > sumD ? sumU : sumD);
	return 0;
}