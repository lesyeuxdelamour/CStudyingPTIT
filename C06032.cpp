#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	char *u = (char *)a;
	char *v = (char *)b;
	char x[22], y[22];
	strcpy(x, u);
	strcpy(y, v);
	strcat(x, v);
	strcat(y, u);
	return strcmp(x, y);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		char arr[n][11];
		for(int i = 0; i < n; ++i)
			scanf("%s", arr[i]);
		qsort(arr, n, sizeof(arr[0]), cmp);
		for(int i = 0; i < n; ++i)
			printf("%s", arr[i]);
		printf("\n");
	}
	return 0;
}