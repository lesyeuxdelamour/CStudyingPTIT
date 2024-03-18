#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	while(scanf("%d%d", &a, &b) != -1)
	{
		if(a == b)
		{
			printf("0\n");
			continue;
		}
		int s = abs(a - b); // s = k * (k - 1) + r;
		double n = floor(sqrt(s));
		double x = ceil((s - n*n)/n);
		int ans = n*2 - 1 + x;
		printf("%d\n", ans);
	}
	return 0;
}