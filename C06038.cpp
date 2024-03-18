#include <stdio.h>
#include <string.h>

int check(char str[], int x, int len)
{
	int d[10], num[10];
	for(int i = 0; i < 10; ++i)
		d[i] = num[i] = 0;
	for(int i = 0; i < len; ++i)
		num[str[i] - '0']++;
	int c = 0;
	for(int i = len - 1; i >= 0; --i)
	{
		int prd = (str[i] - '0') * i + c;
		d[prd%10]++;
		c = prd/10;
	}
	if(c)
		d[c]++;
	for(int i = 0; i < 10; ++i)
		if(num[i] != d[i])
			return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char num[61];
		scanf("%s", num);
		int flag = 1;
		int len = strlen(num);
		for(int i = 2; i <= len; ++i)
		{	
			if(check(num, i, len) == 0)
			{
				flag = 0;
				break;
			}
		}
		printf((flag) ? "YES\n" : "NO\n");
	}
	return 0;
}