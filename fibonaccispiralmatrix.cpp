#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 1000001

bool prime[MAX];
int fibo[101];

void dpFibonacci()
{
    fibo[0] = 0;
    fibo[1] = fibo[2] = 1;
    for (int i = 3; i < 93; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main()
{
	dpFibonacci();
//	int t, test = 0;
//	scanf("%d", &t);
//	while (test++ < t)
//	{
		int n, count = 0;
		scanf("%d", &n);
		int arr[n][n];
		int size = n;
		while (size > n / 2)
		{
			for (int j = n - size; j < size - 1; ++j)
				arr[n - size][j] = fibo[count++];
			for (int i = n - size; i < size - 1; ++i)
				arr[i][size - 1] = fibo[count++];
			for (int j = size - 1; j > n - size; --j)
				arr[size - 1][j] = fibo[count++];
			for (int i = size - 1; i > n - size; --i)
				arr[i][n - size] = fibo[count++];
			size -= 1;
		}
		if (n % 2)
			arr[n / 2][n / 2] = fibo[count++];
//		printf("Test %d:\n", test);
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				printf("%4d ", arr[i][j]);
			printf("\n");
		}
//	}
	return 0;
}
