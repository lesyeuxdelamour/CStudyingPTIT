#include<stdio.h>
#include<string.h>

void mix(char *s1, char *s2, char *s12, int t)
{
	for(int i = 0, j = 0; i < t, j < 2*t; i++, j+=2)
	{
		s12[j] = s1[i];
		s12[j+1] = s2[i];
	}
	s12[2*t] = '\0';
}

void split(char *s1, char *s2, char *s12, int t)
{
	for(int i = 0; i < t; ++i)
	{
		s1[i] = s12[i];
		s2[i] = s12[i+t];
	}
}	

int solve(int t)
{
	char s1[t], s2[t], s12[2*t+1];
	scanf("%s%s%s", s1, s2, s12);
	char c1[t], c2[t], c12[2*t+1];
	strcpy(c1, s1); strcpy(c2, s2);
	int count = 0;
	while(1)
	{
		count++;
		mix(c1, c2, c12, t); 
		if(strcmp(s12, c12) == 0)
			return count;
		split(c1, c2, c12, t);
		if(!strcmp(c1, s1) && !strcmp(c2, s2))
			break;
	}
	return -1;
}

int main()
{
	int t = -1;
	while(t)
	{
		scanf("%d\n", &t);
		if(t)
			printf("%d\n", solve(t));
	}
	return 0;
}
