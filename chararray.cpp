#include <stdio.h>
#include <string.h>

int check(char s[])
{
	int len = strlen(s);
	int a1[len], a2[len], b1[len], b2[len], c1[len], c2[len];
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0;
	for(int i = 0; i < len; ++i)
	{
		if(s[i] == '(')
			a1[cnt1++] = i;
		if(s[i] == ')')
			a2[cnt2++] = i;
		if(s[i] == '[')
			b1[cnt3++] = i;
		if(s[i] == ']')
			b2[cnt4++] = i;
		if(s[i] == '{')
			c1[cnt5++] = i;
		if(s[i] == '}')
			c2[cnt6++] = i;
		if(s[i] == '\'')
			cnt7++;
		if(s[i] == '"')
			cnt8++;
	}
	if(cnt6%2 || cnt7%2)
		return 0;
	if(cnt1 != cnt2 || cnt3 != cnt4 || cnt5 != cnt6)
		return 0;
	for(int i = 0; i < cnt1; ++i)
		if(a1[i] > a2[i])
			return 0;
	for(int i = 0; i < cnt3; ++i)
		if(b1[i] > b2[i])
			return 0;
	for(int i = 0; i < cnt5; ++i)
		if(c1[i] > c2[i])
			return 0;
	return 1;
}

int main()
{
	char s[1001];
	scanf("%s", s);
	printf("%d", check(s));
}