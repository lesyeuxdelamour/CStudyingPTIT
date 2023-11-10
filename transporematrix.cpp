#include <stdio.h>

int arr[10][10];

int main()
{
	int n, m;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			scanf("%d", &arr[i][j]);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			printf("%d ", arr[j][i]);
		printf("\n");
	}
	return 0;
}
