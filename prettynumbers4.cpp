#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool palindromic(char *num)
{
	int n = strlen(num);
	for(int i = 0; i < n/2; i++)
		if(num[i] != num[n-i-1])
			return false;
	return true;
}

bool evendigit(char *num)
{
	int n = strlen(num);
	for(int i = 0; i < n; i++)
		if(num[i] == '1' || num[i] == '3' || num[i] == '5' || num[i] == '7' || num[i] == '9')
			return false;
	return true;
}

void solve()
{
	char num[500];
		scanf("%s", num);
	if(palindromic(num) && evendigit(num))
		printf("YES\n");
	else
		printf("NO\n");	
}

int main()
{
	int t;
		scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}
