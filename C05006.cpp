#include <stdio.h>

int arr[20][20];

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n, m, x, y;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			scanf("%d", &arr[i][j]);
	scanf("%d%d", &x, &y);
	for (int j = 0; j < n; ++j)
		swap(&arr[x - 1][j], &arr[y - 1][j]);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
