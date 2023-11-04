#include<stdio.h>
#include<string.h>

int split(char digit)
{
	if(digit == '0' || digit == '8' || digit == '9')
		return 0;
	if(digit == '1')
		return 1;
	return -1;
}

void solve()
{
	char num[18]; long long result = 0; int digit = 0;
		scanf("%s", num);
	for(int i = 0; i < strlen(num); i++)
	{
		digit = split(num[i]);
		if(digit == -1)
		{
			printf("INVALID\n");
			return;
		}
		result = result * 10 + digit;
	}
	if(result == 0)
		printf("INVALID\n");
	else
		printf("%lld\n", result);
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	fflush(stdin);
	while(t--)
		solve();
}
