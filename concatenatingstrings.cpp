#include <stdio.h>
#include <string.h>

void swap(char a[], char b[])
{
	char c[11];
	strcpy(c, a);
	strcpy(a, b);
	strcpy(b, c);
}

int cmp(char a[], char b[])
{
	char c[22], d[22];
	strcpy(c, a);
	strcpy(d, b);
	strcat(c, b);
	strcat(d, a);
	if(strcmp(c, d) > 0)
		return 1;
	return 0;
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
		for(int i = 0; i < n - 1; ++i)
			for(int j = i + 1; j < n; ++j)
				if(cmp(arr[i], arr[j]))
					swap(arr[i], arr[j]);
		for(int i = 0; i < n; ++i)
			printf("%s", arr[i]);
		printf("\n");
	}
	return 0;
}