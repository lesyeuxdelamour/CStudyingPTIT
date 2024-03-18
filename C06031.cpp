#include <stdio.h>
#include <string.h>

int main()
{
	char s[51];
	scanf("%s", s);
	int len = strlen(s), max = 0;
	int dp[len];
	for(int i = 0; i < len; ++i)
	{	
		dp[i] = 1;
		for(int j = 0; j < i; ++j)
			if(s[i] > s[j] && dp[i] <= dp[j])
				dp[i] = dp[j] + 1;
		if(max < dp[i])
			max = dp[i];
	}
	printf("%d", 26 - max);
	return 0;
}