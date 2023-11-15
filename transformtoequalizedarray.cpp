#include <stdio.h>
#include <stdlib.h>

int arr[201], temparr[201];

int cmp(const void *a, const void *b)
{
	int u = *(int *)a;
	int v = *(int *)b;
	return u - v;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		temparr[i] = arr[i];
	}
	qsort(arr, n, sizeof(int), cmp);
	int start = 0, end = n - 1, step = 0;
	while (start < end)
	{
		step += abs(arr[end] - arr[start]);
		start++;
		end--;
	}
	if (n % 2)
		printf("%d %d", step, arr[n / 2]);
	else
		for (int i = 0; i < n; ++i)
			if (temparr[i] == arr[n / 2] || temparr[i] == arr[n / 2 - 1])
			{
				printf("%d %d", step, temparr[i]);
				break;
			}
	return 0;
}
