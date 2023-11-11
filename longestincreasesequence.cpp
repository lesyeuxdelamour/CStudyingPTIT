#include <stdio.h>

int arr[101], count[101];

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while (test++ < t)
	{
		int n, maxLength = 1;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
		{
			count[i] = 1;
			scanf("%d", &arr[i]);
			if (i && arr[i] > arr[i - 1])
			{
				count[i] += count[i - 1];
				maxLength = max(maxLength, count[i]);
			}
		}
		printf("Test %d:\n%d\n", test, maxLength);
		for (int i = 0; i < n; ++i)
		{
			if (count[i] == maxLength)
			{
				for (int j = i - maxLength; j < i; ++j)
					printf("%d ", arr[j + 1]);
				printf("\n");
			}
		}
	}
	return 0;
}
