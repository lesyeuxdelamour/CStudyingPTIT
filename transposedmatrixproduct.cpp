#include <stdio.h>
#include <string.h>

int arr[50][50], arr_t[50][50], arrx_t[50][50];

void transpose(int arr[50][50], int arr_t[50][50], int m, int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			arr_t[i][j] = arr[j][i];
}

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while (test++ < t)
	{
		int m, n;
		scanf("%d%d", &m, &n);
		for (int i = 0; i < m; ++i)
			for (int j = 0; j < n; ++j)
				scanf("%d", &arr[i][j]);
		transpose(arr, arr_t, m, n);
		printf("Test %d:\n", test);
		memset(arrx_t, 0, sizeof(arrx_t)); 
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				for (int k = 0; k < n; ++k)
					arrx_t[i][j] += arr[i][k] * arr_t[k][j];
				printf("%d ", arrx_t[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
