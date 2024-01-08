#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d\n", &n,  &m);
		int arr[n][m], row[n], col[m], color[3];
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j)
			{
				arr[i][j] = getchar() - '0';
				if(arr[i][j] != 0)
				{
					row[i]++;
					col[j]++;
					color[arr[i][j]]++;
				}	
			}
			getchar();
		}
		int cnt = 0;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				printf("%d ", arr[i][j]);
	}
	return 0;
}