#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 1000001

bool prime[MAX];
int arr[101];

void sieve()
{
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for (int p = 2; p * p <= MAX; ++p)
	{
		if (prime[p])
			for (int i = p * p; i < MAX; i += p)
				prime[i] = false;
	}
}

int main()
{
	sieve();
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		for (int i = 0; i < n; ++i)
			if (prime[arr[i]])
				printf("%d ", arr[i]);
		printf("\n");
	}
	return 0;
}
