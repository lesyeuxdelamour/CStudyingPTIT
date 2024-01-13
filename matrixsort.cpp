#include <stdio.h>

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while(test++ < t)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		int arr[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				scanf("%d", &arr[i][j]);
		
	}
	return 0;
}