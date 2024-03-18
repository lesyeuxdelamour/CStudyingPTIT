#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef long long ll;

ll max(char *x)
{
	int length = strlen(x);
	for(int i = 0; i < length; i++)
		if(x[i] == '5')
			x[i] = '6';
	return atoll(x);
}

ll min(char *x)
{
	int length = strlen(x);
	for(int i = 0; i < length; i++)
		if(x[i] == '6')
			x[i] = '5';
	return atoll(x);
}

int main()
{
	int t;
		scanf("%d", &t);
		fflush(stdin);
	while(t--)
	{
		char x1[18], x2[18];
			scanf("%s%s", x1, x2);	
		ll minsum = min(x1) + min(x2);
		ll maxsum = max(x1) + max(x2);
		printf("%lld %lld\n", minsum, maxsum);
	}
	return 0;
}
