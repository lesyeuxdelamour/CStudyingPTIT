#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void standard(char *str)
{
	str[0] = toupper(str[0]);
	for(int i = 1; i < strlen(str); i++)
		str[i] = tolower(str[i]);
}
int main()
{
	int t = 0;
		scanf("%d\n", &t);
	while(t--)
	{
		char str[80];
			gets(str);
		char *token = strtok(str, " ");
		while(token != NULL)
		{
			standard(token);
			printf("%s ", token);
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
	return 0;
}
