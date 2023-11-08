#include <stdio.h>

int arr[101], odd[101], even[101];

int main()
{
	int n, o = 0, e = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2)
			odd[o++] = arr[i];
		else
			even[e++] = arr[i];
	}
	for (int i = 0; i < e; ++i)
		printf("%d ", even[i]);
	printf("\n");
	for (int i = 0; i < o; ++i)
		printf("%d ", odd[i]);
	return 0;
}
