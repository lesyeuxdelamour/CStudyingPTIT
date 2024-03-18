#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int Roman(char c)
{
	if(c == 'I')
		return 1;
	if(c == 'V')
		return 5;
	if(c == 'X')
		return 10;
	if(c == 'L')
		return 50;
	if(c == 'C')
		return 100;
	if(c == 'D')
		return 500;
	if(c == 'M')
		return 1000;
}

void solve()
{
	char num[100];
		scanf("%s", num);
	int n = strlen(num), res = 0;
	res+=Roman(num[n-1]);
	for(int i = n-1; i > 0; i--)
	{
		if(Roman(num[i-1]) < Roman(num[i]))
			res-=Roman(num[i-1]);
		else
			res+=Roman(num[i-1]);
	}
	printf("%d\n", res);
}

int main()
{
	int t;
		scanf("%d\n", &t);
	while(t--)
		solve();
	return 0;
}
