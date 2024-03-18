#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n*2][n*2];
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= n; ++j)
		{
			int min = i < j ? i : j;
			arr[i][j] = arr[n*2 - i][j] = arr[i][n*2 - j] = arr[n*2 - i][n*2 - j] = n - min + 1;
		}
	for(int i = 1; i < n*2; ++i)
	{
		for(int j = 1; j < n*2; ++j)
			printf("%d", arr[i][j]);
		printf("\n");
	}
}