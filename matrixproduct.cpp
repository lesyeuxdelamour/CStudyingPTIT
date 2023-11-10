#include <stdio.h>

int arr1[50][50], arr2[50][50], arr1x2[50][50];

int main()
{
	int m, n, p;
	scanf("%d%d%d", &m, &n, &p);
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			scanf("%d", &arr1[i][j]);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < p; ++j)
			scanf("%d", &arr2[i][j]);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			for (int k = 0; k < n; ++k)
				arr1x2[i][j] += arr1[i][k] * arr2[k][j];
			printf("%d ", arr1x2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
