#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcompare(char s1[], char s2[])
{
	int len1 = strlen(s1), len2 = strlen(s2);
	if(len1 != len2)
		return 0;
	for(int i = 0; i < len1; ++i)
		if(tolower(s1[i]) != tolower(s2[i]))
			return 0;
	return 1;
}

int main()
{
	int t, test = 0;
	scanf("%d\n", &t);
	while(test++ < t)
	{
		char s1[201];
		fgets(s1, 201, stdin);
		char s2[21];
		scanf("%s", s2);
		printf("Test %d: ", test);
		char *token = strtok(s1, " \n");
		while (token != NULL)
		{
			if (strcompare(token, s2) == 0)
				printf("%s ", token);
			token = strtok(NULL, " \n");
		}
		printf("\n");
		scanf("\n");
	}
	return 0;
}