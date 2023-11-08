#include<stdio.h>

int arr[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	for(int i = n - 1; i >= 0; --i)
		printf("%d ", arr[i]);
	return 0;
}
