#include <stdio.h>
#define max 10000001

int arr[101], count[max];

int main()
{
	int n, res = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		count[arr[i]]++;
	}
	for (int i = 0; i < n; ++i)
		if (count[arr[i]] == 1)
			res++;
	printf("%d\n", res);
	for (int i = 0; i < n; ++i)
		if (count[arr[i]] == 1)
			printf("%d ", arr[i]);
	return 0;
}
