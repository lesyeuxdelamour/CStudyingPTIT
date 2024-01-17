#include <stdio.h>

typedef long long ll;

int main()
{
 	ll n, Max = 0;
	while(scanf("%lld", &n) != -1)
		if(n > Max)
			Max = n;
	printf("%lld", Max);
	return 0;
}