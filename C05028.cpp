#include <stdio.h>

void SWAP(int arr[11][11], int a, int b)
{
	for(int i = 0; i <= a; ++i)
		for(int j = 0; j <= b; ++j)
			arr[i][j] = 1 - arr[i][j];
}

int main()
{
	int arr[11][11];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		getchar();
		for(int j = 0; j < n; ++j)
			arr[i][j] = getchar() - '0';
	}
	int cnt = 0;
	for(int i = n - 1; i >= 0; --i)
	{
		for(int j = n - 1; j >= 0; --j)
		{
			if(arr[i][j] == 1)
			{
				SWAP(arr, i, j);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}