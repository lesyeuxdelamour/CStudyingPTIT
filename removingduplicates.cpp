#include <stdio.h>
#define max 10000001

int arr[101], count[max], val[101];

int main()
{
	int n, m = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		count[arr[i]]++;
	}
	for (int i = 0; i < n; ++i)
		if (count[arr[i]] > 0)
		{
			val[m++] = arr[i];
			count[arr[i]] = 0;
		}
	for (int i = 0; i < m; ++i)
		printf("%d ", val[i]);
	return 0;
}
