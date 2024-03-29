#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strlower(char *str)
{
	for (int i = 0; i < strlen(str); ++i)
		str[i] = tolower(str[i]);
}

int main()
{
	char name[51], word[11][11];
	fgets(name, 51, stdin);
	strlower(name);
	int n = 0;
	char *token = strtok(name, " ");
	while (token != NULL)
	{
		strcpy(word[n++], token);
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < n - 1; ++i)
		printf("%c", word[i][0]);
	word[n - 1][strlen(word[n - 1]) - 1] = '\0';
	printf("%s@ptit.edu.vn", word[n - 1]);
	return 0;
}
