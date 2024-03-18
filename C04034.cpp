#include <stdio.h>

int arr[1001];

int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		for (int i = 0; i < n - 1; ++i)
		{
			int flag = 1;
			for (int j = i + 1; j < n; ++j)
				if (arr[i] <= arr[j])
				{
					flag = 0;
					break;
				}
			if (flag)
				printf("%d ", arr[i]);
		}
		printf("%d\n", arr[n - 1]);
	}
	return 0;
}