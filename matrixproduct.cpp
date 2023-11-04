#include<stdio.h>
#define max 50

void input(int arr[max][max], int a, int b)
{
	for(int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			scanf("%d", &arr[i][j]);
}

void matrixproduct(int arr1[max][max], int arr2[max][max], int arr1x2[max][max], int m, int n, int p)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < p; j++)
		{
			for(int k = 0; k < n; k++)
			{
				arr1x2[i][j] += arr1[i][k] * arr2[k][j];
			}
			printf("%d ", arr1x2[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int m = 0, n = 0, p = 0;
		scanf("%d%d%d", &m, &n, &p);
	int arr1[max][max], arr2[max][max];
	input(arr1, m, n);
	input(arr2, n, p);
	int arr1x2[max][max] = {0};
	matrixproduct(arr1, arr2, arr1x2, m, n, p);
	return 0;
}
