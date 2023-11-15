#include <stdio.h>
#include <string.h>

int main()
{
	char s1[101];
	fgets(s1, 101, stdin);
	char s2[101];
	scanf("%s", s2);
	char *token = strtok(s1, " ");
	while (token != NULL)
	{
		if (strcmp(token, s2))
			printf("%s ", token);
		token = strtok(NULL, " ");
	}
	return 0;
}
