#include <stdio.h>
#include <string.h>

int main()
{
	char s[1001][10];
	int cnt = 0, lenMax = 0;
	while(scanf("%s", s[cnt]) != -1)
	{
		if(lenMax < strlen(s[cnt]))
			lenMax = strlen(s[cnt]);
		cnt++;
	}
	for(int i = 0; i < cnt; ++i)
	{
		if(strlen(s[i]) == lenMax)
		{
			int fre = 1;
			for(int j = i + 1; j < cnt; ++j)
				if(strcmp(s[j], s[i]) == 0)
				{
					fre++;
					strcpy(s[j], "");
				}
			printf("%s %d %d\n", s[i], lenMax, fre);
		}
	}
	return 0;
}