#include <stdio.h>

int arr[100][100];

int main()
{
	int n, val = 1;
	scanf("%d", &n);
	int size = n;
	while (size > n / 2)
	{
		for (int j = n - size; j < size - 1; ++j)
			arr[n - size][j] = val++;
		for (int i = n - size; i < size - 1; ++i)
			arr[i][size - 1] = val++;
		for (int j = size - 1; j > n - size; --j)
			arr[size - 1][j] = val++;
		for (int i = size - 1; i > n - size; --i)
			arr[i][n - size] = val++;
		size -= 1;
	}
	if (n % 2)
		arr[n / 2][n / 2] = val;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			printf("%4d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
