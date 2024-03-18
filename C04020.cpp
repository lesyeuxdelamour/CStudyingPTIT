#include <stdio.h>

int arr[101];

int main()
{
	int n, k;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	scanf("%d", &k);
	for (int i = k; i < n; ++i)
		printf("%d ", arr[i]);
	for (int i = 0; i < k; ++i)
		printf("%d ", arr[i]);
	return 0;
}
