#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void solve()
{
	int num, base, count = 0;
		scanf("%d%d", &num, &base);
	if(num == 0)
	{
		printf("0\n");
		return;
	}
	char result[10];
	while(num)
	{
		int res = num%base;
		if(res < 10)
			result[count++] = res + '0';
		else
			result[count++] = res - 10 +'A';
		num/=base;
	}
	result[count] = '\0';
	int n = strlen(result);
	for(int i = n; i >= 0; i--)
		printf("%c", result[i]);
}

int main()
{
	int t;
		scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}
