#include <stdio.h>
#include <string.h>

int check(char s[]) 
{
	int cnt[1001];
	for(int i = 0; i < strlen(s); ++i)
		cnt[s[i]]++;
	if (cnt['('] != cnt[')']) return 0;
	if (cnt['['] != cnt[']']) return 0;
	if (cnt['{'] != cnt['}']) return 0;
	if (cnt['\''] % 2 != 0) return 0;
	if (cnt['"'] % 2 != 0) return 0;
	return 1; 
}

int main()
{
	char s[1001];
	scanf("%s", s);
	printf("%d", check(s));
}