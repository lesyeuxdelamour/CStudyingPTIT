#include<stdio.h> 

void input(int arr[][3], int m)
{
	for(int i = 0; i < m; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
}

void check(int arr[][3], int m, int rows)
{
	for(int i = 0; i < m; i++)
	{
		int ones = 0, zeros = 0;
		for (int j = 0; j < 3; j++)
		{
			if(arr[i][j] == 1)
				ones++;
			else if(arr[i][j] == 0)
				zeros++;
		}
		if(ones > zeros)
			rows++;
	}
		printf("%d", rows);
}

int main()
{
	int m = 0;
		scanf("%d", &m);
	int arr[m][3];
	input(arr, m);
	int rows = 0;
	check(arr, m, rows);
}
