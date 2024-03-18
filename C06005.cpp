#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strlower(char s[])
{
	int len = strlen(s);
	for(int i = 0; i < len; ++i)
		s[i] = tolower(s[i]);
}

int main()
{
	char s[101], str[101][101];
	fgets(s, 101, stdin);
	char *token = strtok(s, " \n");
	int cnt = 0;
	while(token != NULL)
	{
		strlower(token);
		strcpy(str[cnt++], token);
		token = strtok(NULL, " \n");
	}
	for(int i = 0; i < cnt; ++i)
	{
		if(strcmp(str[i], ""))
		{
			int cnt2 = 1;
			for(int j = i + 1; j < cnt; ++j)
			{
				if(!strcmp(str[j], str[i]))
				{
					strcpy(str[j], "");
					cnt2++;
				}
			}
			printf("%s %d\n", str[i], cnt2);
		}
	}
	return 0;
}