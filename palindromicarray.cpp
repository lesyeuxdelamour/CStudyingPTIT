#include <stdio.h>

int arr[101];

int palind(int *arr, int n)
{
	int l = 0, r = n - 1;
	while (l < r)
	{
		if (arr[l] == arr[r])
		{
			l++;
			r--;
		}
		else
			return 0;
	}
	return 1;
}

int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		printf(palind(arr, n) ? "YES\n" : "NO\n");
	}
	return 0;
}
