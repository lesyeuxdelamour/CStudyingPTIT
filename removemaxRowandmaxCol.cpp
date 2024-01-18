#include <stdio.h>

int rowMax(int arr[][10], int n, int m)
{
	int idx = 0, sumMax = 0;
	for(int i = 0; i < n; ++i)
	{
		int sum = 0;
		for(int j = 0; j < m; ++j)
			sum += arr[i][j];
		if(sum > sumMax)
		{
			sumMax = sum;
			idx = i;
		}
	}
	return idx;
}

int colMax(int arr[][10], int n, int m, int maxRow)
{
	int idx = 0, sumMax = 0;
	for(int i = 0; i < m; ++i)
	{
		int sum = 0;
		for(int j = 0; j < n; ++j)
			if(j != maxRow)
				sum += arr[j][i];
		if(sum > sumMax)
		{
			sumMax = sum;
			idx = i;
		}
	}
	return idx;
}

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while(test++ < t)
	{
		int arr[10][10];
		int n, m;
		scanf("%d%d", &n, &m);
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				scanf("%d", &arr[i][j]);
		printf("Test %d:\n", test);
		int maxRow = rowMax(arr, n, m);
		int maxCol = colMax(arr, n, m, maxRow);
		for(int i = 0; i < n; ++i)
		{
			if(i != maxRow)
			{
				for(int j = 0; j < m; ++j)
					if(j != maxCol)
						printf("%d ", arr[i][j]);
				printf("\n");
			}
		}
	}
	return 0;
}