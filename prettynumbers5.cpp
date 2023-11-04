#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check(char *num)
{
	int n = strlen(num), sum = 0;
	if(num[n-1] != '8')
		return false;
	else
	{
		for(int i = 0; i < n; i++)
			if(num[i] != '0')
			{
				num[i]-='0';
				sum+=num[i];
			}
		if(sum%10 != 0)
			return false;
	}
	return true;
}

void solve()
{
	char num[500];
		scanf("%s", num);
	if(check(num))
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
