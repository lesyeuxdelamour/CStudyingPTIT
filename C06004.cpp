#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int letters = 0, digits = 0, others = 0;
	char s[201];
	fgets(s, 201, stdin);
	for (int i = 0; i < strlen(s); ++i)
	{
		if (isalpha(s[i]))
			letters++;
		else if (isdigit(s[i]))
			digits++;
		else
			others++;
	}
	printf("%d %d %d", letters, digits, others);
	return 0;
}
