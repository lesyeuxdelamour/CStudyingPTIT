#include <stdio.h>
#include <string.h>

/*
7
29-T1 123.45
29-T1 555.55
29-T1 222.33
29-T1 686.88
29-T1 123.33
29-T1 555.54
29-T1 606.88
*/

int check(char s[])
{
	if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
		return 1;
	int flag1 = 1, flag2 = 1;
	for(int i = 0; i < 5; ++i)
	{
		if(s[i] != '6' && s[i] != '8')
			flag1 = 0;
		if(i && s[i] <= s[i - 1])
			flag2 = 0;
	}		
	if(flag1 || flag2)
		return 1;
	return 0;
		
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("\n");
		char s[16];
		gets(s);
		char num[6] = {s[6], s[7], s[8], s[10], s[11]};
		printf((check(num)) ? "YES\n" : "NO\n");
	}
	return 0;
}