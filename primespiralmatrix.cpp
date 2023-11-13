#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 1000001

bool prime[MAX];
int arr[20][20], val[78498];

void sieve()
{
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for (int p = 2; p * p < MAX; ++p)
	{
		if (prime[p])
			for (int i = p * p; i < MAX; i += p)
				prime[i] = false;
	}
	int count = 0;
	for (int i = 2; i < MAX; ++i)
		if (prime[i])
			val[count++] = i;
}

int main()
{
	sieve();
	int t, test;
	scanf("%d", &t);
	while (test++ < t)
	{
		int n, count = 0;
		scanf("%d", &n);
		int size = n;
		while (size > n / 2)
		{
			for (int j = n - size; j < size - 1; ++j)
				arr[n - size][j] = val[count++];
			for (int i = n - size; i < size - 1; ++i)
				arr[i][size - 1] = val[count++];
			for (int j = size - 1; j > n - size; --j)
				arr[size - 1][j] = val[count++];
			for (int i = size - 1; i > n - size; --i)
				arr[i][n - size] = val[count++];
			size -= 1;
		}
		if (n % 2)
			arr[n / 2][n / 2] = val[count++];
		printf("Test %d:\n", test);
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				printf("%4d ", arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}
