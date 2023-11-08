#include <stdio.h>

typedef long long ll;

ll fibo[92];

void dp(ll *fibo)
{
	fibo[0] = 0;
	fibo[1] = fibo[2] = 1;
	for (int i = 3; i <= 92; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main()
{
	dp(fibo);
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		int n = 0;
		scanf("%d", &n);
		printf("%lld\n", fibo[n]);
	}
	return 0;
}
