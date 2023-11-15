#include <stdio.h>

int arr[1001][1001], res[1001];

void hePTbac2(int *a, int *b, int *c, int *d, int *e, int *f)
{
	*a = (*d + *e - *f) / 2;
	*b = (*d - *a);
	*c = (*f - *b);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			scanf("%d", &arr[i][j]);
	if (n == 2)
		printf("%d %d", 0, arr[0][1]);
	else
	{
		for (int i = 1; i < n - 1; ++i)
			hePTbac2(&res[i - 1], &res[i], &res[i + 1], &arr[i - 1][i], &arr[i - 1][i + 1], &arr[i][i + 1]);
		for (int i = 0; i < n; ++i)
			printf("%d ", res[i]);
	}
	return 0;
}
