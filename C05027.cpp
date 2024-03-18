#include <stdio.h>

typedef long long ll;

int main()
{
	int n;
	scanf("%d", &n);
	int minC = 1e6 + 1, minR = 1e6 + 1;
	while(n--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a < minR)
			minR = a;
		if(b < minC)
			minC = b;
	}
	printf("%lld", (ll)minC*minR);
	return 0;
}