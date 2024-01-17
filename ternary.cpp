#include <stdio.h>
#include <string.h>

int isTernary(char s[])
{
	int len = strlen(s);
	for(int i = 0; i < len; ++i)
		if(s[i] > '3')
			return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[19];
		scanf("%s", s);
		printf((isTernary(s)) ? "YES\n" : "NO\n");
	}
	return 0;
}