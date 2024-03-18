#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char s[])
{
	if(s[0] == '0')
		return -1;
	int n = strlen(s), cnt = 0;
	for(int i = 0; i < n; ++i)
	{
		if(!isdigit(s[i]))
			return -1;
		if((s[i] - '0')%2)
			cnt++;
	}
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
	return 0;
}
