#include<stdio.h>

typedef long long ll;

ll gcd(ll a, ll b)
{
	ll tmp;
	while(b)
	{
		tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}

ll lcm(ll a, ll b)
{
    ll tmp, k = a * b;
    while(b) 
	{
        tmp = a%b;
        a = b;
        b = tmp;
    }
    return k / a;
}

int main()
{
	ll a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld\n%lld", gcd(a, b), lcm(a, b));
}

//Note: BCNN có thể lớn hơn 2^31