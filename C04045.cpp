#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(int arr[], int n)
{
	int cnt = 0;
	for(int i = 0; i < n; ++i)
		if(arr[i]%2)
			cnt++;
	if((cnt > n/2 && n%2 == 1) || (cnt < n/2 && n%2 == 0))
		return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		char s[1001];
		fgets(s, 1001, stdin);
		int arr[201];
		int cnt = 0;
		char *token = strtok(s, " \n");
		while(token != NULL)
		{
			arr[cnt++] = atoi(token);
			token = strtok(NULL, " \n");
		}
		printf((check(arr, cnt)) ? "YES\n" : "NO\n");
	}
	return 0;
}
