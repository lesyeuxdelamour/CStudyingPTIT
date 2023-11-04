#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

int cmp(const void *a, const void *b)
{
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}

int main()
{
	char s1[100], s2[100];
		gets(s1);
		gets(s2);
	char a1[50][10], a2[50][10];
	int count1 = 0, count2 = 0;
	char *token1 = strtok(s1, " ");
	while(token1 != NULL)
	{
		strcpy(a1[count1++], token1);
		token1 = strtok(NULL, " ");
	}
	char *token2 = strtok(s2, " ");
	while(token2 != NULL)
	{
		strcpy(a2[count2++], token2);
		token2 = strtok(NULL, " ");
	}
	qsort(a1, count1, sizeof(a1[0]), cmp);
	for(int i = 0; i < count1; i++)
	{
		while(strcmp(a1[i], a1[i+1]) == 0)
			i++;
		bool unique = true;
		for(int j = 0; j < count2; j++)
			if(strcmp(a1[i], a2[j]) == 0)
			{
				unique = false;
				break;
			}
		if(unique == true)
			printf("%s ", a1[i]);
	}
	return 0;
}
