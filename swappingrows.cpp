#include<stdio.h>
#define max 25

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

void switchrow(int arr2[max][max], int arr3[max][max], int m, int n, int x, int y)
{
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(j == x)
				arr3[i][j] = arr2[i][y];
			else if(j == y)
				arr3[i][j] = arr2[i][x];
			else
				arr3[i][j] = arr2[i][j];
		}
	}
}

void output(int arr3[max][max], int arr1[max][max], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%d ", arr3[j][i]);
		printf("\n");
	}
}

int main()
{
	int m = 0, n = 0, arr1[max][max], arr2[max][max], arr3[max][max];
		scanf("%d%d", &m, &n);
	input(arr1, m, n);
	rotate(arr1, arr2, m, n);
	int x = 0, y = 0;
		scanf("%d%d", &x, &y);
	x--; y--;
	switchrow(arr2, arr3, m, n, x, y);
	output(arr3, arr1, m, n);
	return 0;
}
