#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char s[])
{
	if(s[0] == '0')
		return -1;
	int n = strlen(s);
	int d[10] = {};
	for(int i = 0; i < n; ++i)
	{
		if(!isdigit(s[i]))
			return -1;
		d[s[i] - '0']++;
	}
	for(int i = 0; i <= 9; ++i)
		if(d[i] == 0)
			return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		char s[1001];
		fgets(s, 1001, stdin);
		s[strlen(s) - 1] = '\0';
		switch(check(s))
		{
			case 1:
				printf("YES\n");
				break;
			case 0:
				printf("NO\n");
				break;
			case -1:
				printf("INVALID\n");
				break;
		}
	}
}