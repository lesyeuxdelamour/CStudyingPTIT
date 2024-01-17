#include <stdio.h>

typedef long long ll;

ll lcm(ll a, ll b)
{
    ll tmp, k = a * b;
    while(b) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return k / a;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		ll ans = 1;
		for(int i = 2; i <= n; ++i)
			ans = lcm(ans, i);
		printf("%lld\n", ans);
	}
	return 0;
}