#include <stdio.h>

int arr[101];

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		int maxEle = -1;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i]);
			maxEle = max(maxEle, arr[i]);
		}
		printf("%d\n", maxEle);
		for (int i = 0; i < n; ++i)
			if (arr[i] == maxEle)
				printf("%d ", i);
		printf("\n");
	}
	return 0;
}