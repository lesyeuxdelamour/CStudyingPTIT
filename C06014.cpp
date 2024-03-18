#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
		char *token = strtok(str, " \n");
		while (token != NULL)
		{
			standard(token);
			printf("%s ", token);
			token = strtok(NULL, " \n");
		}
		printf("\n");
	}
	return 0;
}
