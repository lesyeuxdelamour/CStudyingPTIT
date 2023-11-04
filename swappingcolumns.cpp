#include<stdio.h>
#define max 25

void input(int arr[max][max], int m, int n)
{
	for(int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
}

void switchcol(int arr[max][max], int m, int n, int x, int y)
{
	for(int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(j == x)
				printf("%d ", arr[i][y]);
			else if(j == y)
				printf("%d ", arr[i][x]);
			else
				printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int m = 0, n = 0, arr[max][max] = {};
		scanf("%d%d", &m, &n);
	input(arr, m, n);
	int x = 0, y = 0;
		scanf("%d%d", &x, &y);
	x--; y--;
	switchcol(arr, m, n, x, y);
	return 0;
}
