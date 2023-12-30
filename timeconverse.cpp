#include <stdio.h>

typedef long long ll;

int main()
{
//	int t;
//	scanf("%d", &t);
//	while (t--)
	{
		int n;
		scanf("%d", &n);
		printf("%d ", n / 365);
		n %= 365;
		printf("%d ", n / 7);
		n %= 7;
		printf("%d", n);
	}
	return 0;
}