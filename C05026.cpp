#include <stdio.h>

int prime(int n)
{
	if(n < 2)
		return 0;
	if(n == 2 || n == 3)
		return 1;
	if(n%2 == 0 || n%3 == 0)
		return 0;
	for(int i = 5; i*i <= n; i+=6)
		if(n%i == 0 || n%(i+2) == 0)
			return 0;
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n][n], row[n][n];
	int maxCnt = 0, maxRow;
	for(int i = 0; i < n; ++i)
	{
		int cnt = 0;
		for(int j = 0; j < n; ++j)
		{
			scanf("%d", &arr[i][j]);
			if(prime(arr[i][j]))
				row[i][cnt++] = arr[i][j];
		}
		if(cnt > maxCnt)
		{
			maxCnt = cnt;
			maxRow = i;
		}
	}
	printf("%d\n", maxRow + 1);
	for(int j = 0; j < maxCnt; ++j)
		printf("%d ", row[maxRow][j]);
	return 0;
}