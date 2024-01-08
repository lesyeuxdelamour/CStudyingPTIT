#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

int main()
{
	char s1[101], s2[101];
	fgets(s1, 101, stdin);
	fgets(s2, 101, stdin);
	char a1[51][11], a2[51][11];
	int count1 = 0, count2 = 0;
	char *token1 = strtok(s1, " \n");
	while (token1 != NULL)
	{
		strcpy(a1[count1++], token1);
		token1 = strtok(NULL, " \n");
	}
	char *token2 = strtok(s2, " \n");
	while (token2 != NULL)
	{
		strcpy(a2[count2++], token2);
		token2 = strtok(NULL, " \n");
	}
	qsort(a1, count1, sizeof(char[11]), cmp);
	for (int i = 0; i < count1; ++i)
	{
		while (!strcmp(a1[i], a1[i + 1]))
			++i;
		int flag = 1;
		for (int j = 0; j < count2; ++j)
			if (strcmp(a1[i], a2[j]) == 0)
			{
				flag = 0;
				break;
			}
		if (flag)
			printf("%s ", a1[i]);
	}
	return 0;
}
