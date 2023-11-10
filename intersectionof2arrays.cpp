#include <stdio.h>
#include <stdlib.h>

int val[201], a[1001], b[1001];

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
		a[val[i]]++;
	}
	for (int i = n; i < n + m; ++i)
	{
		scanf("%d", &val[i]);
		b[val[i]];
	}
	qsort(val, n + m, sizeof(int), cmp);
	for (int i = 0; i < n + m; ++i)
		if (a[val[i]] && b[val[i]])
		{
			printf("%d ", val[i]);
			a[val[i]] = b[val[i]] = 0;
		}
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int val[201], count[1001];

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
		count[val[i]]++;
	}
	for (int i = n; i < n + m; ++i)
	{
		scanf("%d", &val[i]);
		count[val[i]]++;
	}
	qsort(val, n + m, sizeof(int), cmp);
	for (int i = 0; i < n + m; ++i)
		if (count[val[i]]w) // có thể tồn tại các phần tử trùng nhau trong 1 mảng
		{
			printf("%d ", val[i]);
			count[val[i]] = 0;
		}
	return 0;
}
*/
