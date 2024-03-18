#include <stdio.h>
#include <string.h>

int arr[20][20], arr_t[20][20], arrx_t[20][20];

void transpose(int arr[20][20], int arr_t[20][20], int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			arr_t[i][j] = arr[j][i];
}

void matrixproduct(int arr[20][20], int arr_t[20][20], int arrx_t[20][20], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
				arrx_t[i][j] += arr[i][k] * arr_t[k][j];
			printf("%d ", arrx_t[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while (test++ < t)
	{
		int n;
		scanf("%d", &n);
		for (int i = n - 1; i >= 0; --i)
			for (int j = i; j >= 0; --j)
				arr[i][j] = j + 1;
		transpose(arr, arr_t, n);
		printf("Test %d:\n", test);
		memset(arrx_t, 0, sizeof(arrx_t)); 
		matrixproduct(arr, arr_t, arrx_t, n);
	}
	return 0;
}
