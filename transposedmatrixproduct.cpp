#include<stdio.h>
#define max 50

void input(int arr1[max][max], int m, int n)
{
	for(int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &arr1[i][j]);
}

void rotate(int arr1[max][max], int arr2[max][max], int m, int n)
{
	for(int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr2[i][j] = arr1[j][i];
}

void matrixproduct(int arr1[max][max], int arr2[max][max], int arr1x2[max][max], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			for(int k = 0; k < n; k++)
			{
				arr1x2[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	for(int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			printf("%d ", arr1x2[j][i]);
		printf("\n");
	}
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	for(int i = 1; i <= t; i++)
	{
		int m = 0, n = 0;
			scanf("%d%d", &m, &n);
		int arr1[max][max], arr2[max][max];
		input(arr1, m, n);
		printf("Test %d:\n", i);
		int arr1x2[max][max] = {0};
		rotate(arr1, arr2, m, n);
		matrixproduct(arr1, arr2, arr1x2, m, n);
	}
	return 0;
}
