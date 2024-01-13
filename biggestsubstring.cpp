#include <stdio.h>
#include <string.h>

int main()
{
	char str[100001];
	char sub[100001];
	scanf("%s", str);
	int len = strlen(str);
	int cnt = 0;
	char minAlpha = str[len - 1];
	for(int i = len - 1; i >= 0; --i)
	{
		if(str[i] == minAlpha)
			sub[cnt++] = minAlpha;
		if(str[i] > minAlpha)
		{
			minAlpha = str[i];
			sub[cnt++] = minAlpha;
		}
	}
	for(int i = cnt - 1; i >= 0; --i)
		printf("%c", sub[i]);
	return 0;
}