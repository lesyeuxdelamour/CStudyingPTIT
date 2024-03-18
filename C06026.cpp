#include <stdio.h>
#include <string.h>
#define max(a, b) a > b ? a : b

int palind(char s[])
{
	int l = 0, r = strlen(s) - 1;
	while(l < r)
	{
		if(s[l] != s[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}

int main()
{
	char s[101];
	char arr[10001][101];
	int cnt = 0, lenMax = 0;
	while(scanf("%s", s) != -1)
	{
		if(palind(s))
		{
			strcpy(arr[cnt++], s);
			lenMax = max(lenMax, strlen(s));
		}
	}
	for(int i = 0; i < cnt; ++i)
	{
		if(strlen(arr[i]) == lenMax)
		{
			int cnt2 = 1;
			for(int j = i + 1; j < cnt; ++j)
				if(strcmp(arr[i], arr[j]) == 0)
				{
					strcpy(arr[j], "\0");
					cnt2++;
				}
			printf("%s %d\n", arr[i], cnt2);
		}
	}
	return 0;
}