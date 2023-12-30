#include <stdio.h>

typedef long long ll;

int main()
{
	ll a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf", a + b, a - b, a * b, a / b, a % b, (float)a / b);
	return 0;
}
