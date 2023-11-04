#include<stdio.h>
#define size 25

void input(int arr[size][size], int row, int col)
{
	for(int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			scanf("%d", &arr[i][j]);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void switchrow(int arr[size][size], int row, int col, int a, int b)
{
	for(int i = 0; i < col; i++)
		swap(&arr[a][i], &arr[b][i]);
}

void switchcol(int arr[size][size], int row, int col, int a, int b)
{
	for(int j = 0; j < row; j++)
		swap(&arr[j][a], &arr[j][b]);
}

void output(int arr[size][size], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

int main()
{
	int row, col, arr[size][size];
		scanf("%d%d", &row, &col);
	input(arr, row, col);
	int a, b;
		scanf("%d%d", &a, &b);
	a--; b--;
	printf("\n");
	switchrow(arr, row, col, a, b);
	output(arr, row, col);
	printf("\n");
	switchcol(arr, row, col, a, b);
	output(arr, row, col);
}

