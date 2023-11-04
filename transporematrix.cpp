#include<stdio.h>
#define max 25

void input(int arr[max][max], int m, int n)
{
	for(int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
}

void rotate(int arr[max][max], int m, int n)
{
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			printf("%d ", arr[j][i]);
		printf("\n");
	}
}

int main()
{
	int m = 0, n = 0, arr[max][max] = {};
		scanf("%d%d", &m, &n);
	input(arr, m, n);
	rotate(arr, m, n);
}
