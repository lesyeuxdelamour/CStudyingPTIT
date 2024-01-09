#include <stdio.h>
#include <string.h>

int main()
{
	char str[51];
	scanf("%s", str);
	int cnt = 0, ans = 0;
	while(str[cnt] != 'a') cnt++;
	for(int i = cnt; i < strlen(str); ++i)
		if(str[i] > str[cnt]);
			
}