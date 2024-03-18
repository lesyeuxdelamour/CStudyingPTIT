#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while (test++ < t)
	{
		int a[101], b[101];
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		for (int i = 0; i < n; ++i)
			scanf("%d", &b[i]);
		qsort(a, n, sizeof(int), cmp);
		qsort(b, n, sizeof(int), cmp);
		printf("Test %d:\n", test);
		for (int i = 0; i < n; ++i)
			printf("%d %d ", a[i], b[n - i - 1]);
		printf("\n");
	}
	return 0;
}
