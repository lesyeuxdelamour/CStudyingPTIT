#include <stdio.h>
#include <string.h>

int toPalindromic(char s[])
{
	int l = 0, r = strlen(s) - 1;
	int cnt = 0;
	while(l <= r)
	{
		if(l == r && cnt == 0)
			cnt++;
		if(s[l] != s[r])
			cnt++;
		l++;
		r--;
	}
	return cnt == 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[21];
		scanf("%s", s);
		printf((toPalindromic(s)) ? "YES\n" : "NO\n");
	}
	return 0;
}