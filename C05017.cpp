#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		int arr[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				scanf("%d", &arr[i][j]);
		int row = 0, col = 0;
		while(row < n && col < m)
		{
			for(int i = col; i < m; ++i)
				printf("%d ", arr[row][i]);
			row++; 
			m--;
			for(int i = row; i < n; ++i)
				printf("%d ", arr[i][m]);
			if(row < n)
			{
				n--;
				for(int i = m - 1; i >= col; --i)
					printf("%d ", arr[n][i]);
			}
			if(col < m)
			{
				for(int i = n - 1; i >= row; --i)
					printf("%d ", arr[i][col]);
				col++;
			}
		}
		printf("\n");
	}
	return 0;	
}