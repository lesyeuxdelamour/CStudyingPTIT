#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
	*b = temp;
}

int main()
{
	int t, test = 0;
	scanf("%d", &t);
	while(test++ < t)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		int arr[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				scanf("%d", &arr[i][j]);
		printf("Test %d:\n", test);
		for(int i1 = 0; i1 < n; ++i1)
			for(int j1 = 0; j1 < m; ++j1)
				for(int i2 = i1; i2 < n; ++i2)
					for(int j2 = j1; j2 < m; ++j2)
						if(arr[i1][j1] > arr[i2][j2])
							swap(&arr[i1][j1], &arr[i2][j2]);
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j)
				printf("%d ", arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}