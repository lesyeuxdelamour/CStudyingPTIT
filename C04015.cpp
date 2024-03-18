#include <stdio.h>

int arr[100001], count[100001];

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while (test++ < t)
	{
		int n = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
			count[arr[i]]++;
		}
		printf("Test %d:\n", test);
		for (int i = 0; i < n; i++)
		{
			if (count[arr[i]])
			{
				printf("%d xuat hien %d lan\n", arr[i], count[arr[i]]);
				count[arr[i]] = 0;
			}
		}
	}
	return 0;
}
