#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int u = *(int *)a;
    int v = *(int *)b;
    return u - v;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int arr[n], diff[n - 1];
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		qsort(arr, n, sizeof(int), cmp);
		for(int i = 1; i < n; ++i)
			diff[i - 1] = arr[i] - arr[i - 1];
		qsort(diff, n - 1, sizeof(int), cmp);
		int cnt = 1;
		while(diff[cnt] == diff[0])
			cnt++;
		printf("%d %d\n", diff[0], cnt);
	}
	return 0;
}