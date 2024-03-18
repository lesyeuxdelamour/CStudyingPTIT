#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strupper(char *str)
{
    for (int i = 0; i < strlen(str); ++i)
        str[i] = toupper(str[i]);
}

void standard(char *str)
{
	str[0] = toupper(str[0]);
	for (int i = 1; i < strlen(str); ++i)
		str[i] = tolower(str[i]);
}

int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--)
	{
		char str[81];
		fgets(str, 81, stdin);
		char name[6][11];
		int cnt = 0;	
		char *token = strtok(str, " \n");
		while (token != NULL)
		{
			strcpy(name[cnt++], token);
			token = strtok(NULL, " \n");
		}
		for(int i = 1; i < cnt; ++i)
		{
			standard(name[i]);
			if(i != cnt - 1)
				printf("%s ", name[i]);
			else
				printf("%s, ", name[i]);
		}
		strupper(name[0]);
		printf("%s\n", name[0]);
	}
	return 0;
}
