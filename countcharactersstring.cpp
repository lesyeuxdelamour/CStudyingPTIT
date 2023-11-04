#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count(char *s, int letters, int digits, int others)
{
	for(int i = 0; i < strlen(s); i++)
	{
		if(isalpha(s[i]))
			letters++;
		else if(isdigit(s[i]))
			digits++;
		else
			others++;
	}
	printf("%d %d %d", letters, digits, others);
}

int main()
{
	int letters = 0, digits = 0, others = 0;
	char s[201];
		gets(s);
	count(s, letters, digits, others);
	return 0;
}

