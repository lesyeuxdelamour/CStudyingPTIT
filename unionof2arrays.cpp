#include <stdio.h>
#include <stdlib.h>

int val[201], c[1001];

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &val[i]);
		c[val[i]]++;
	}
	for (int i = n; i < n + m; ++i)
	{
		scanf("%d", &val[i]);
		c[val[i]]++;
	}
	qsort(val, n + m, sizeof(int), cmp);
	for (int i = 0; i < n + m; ++i)
		if(c[val[i]])
		{
			printf("%d ", val[i]);
			c[val[i]] = 0;
		}
	return 0;
}