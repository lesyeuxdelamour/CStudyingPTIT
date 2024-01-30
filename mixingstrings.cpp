#include <stdio.h>
#include <string.h>

void mix(char s1[], char s2[], char s[], int len)
{
	for(int i = 0, j = 0; i < len, j < len*2; ++i, j+=2)
	{
		s[j] = s2[i];
		s[j+1] = s1[i];
	}
	s[len*2] = '\0';
}

void split(char s1[], char s2[], char s[], int len)
{
	for(int i = 0; i < len; ++i)
	{
		s1[i] = s[i];
		s2[i] = s[i + len];
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	while(n)
	{
		char s1[n + 1], s2[n + 1], s[n*2 + 1];
		scanf("%s%s%s", s1, s2, s);
		char c1[n + 1], c2[n + 1], c[n*2 + 1];
		strcpy(c1, s1);
		strcpy(c2, s2);		
		int cnt = 0;
		while(1)
		{
			mix(c1, c2, c, n);
			cnt++;
			if(strcmp(c, s) == 0)
				break;
			split(c1, c2, c, n);
			if(strcmp(c1, s1) == 0 && strcmp(c2, s2) == 0)
			{
				cnt = -1;
				break;
			}
		}
		printf("%d\n", cnt);
		scanf("%d", &n);	
	}	
	return 0;
}