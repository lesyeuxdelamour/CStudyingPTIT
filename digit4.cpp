#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef long long ll;

bool check(ll n)
{
	int sum = 0;
	while (n)
	{
		if (n % 10 == 4)
			return false;
		else
		{
			sum = sum + n % 10;
			n /= 10;
		}
	}
	return sum % 10 ? false : true;
}

bool palindromic(ll n)
{
	ll reverse = 0, temp = n;
	int remainder = 0;
	while (n)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	return reverse == temp ? true : false;
}

void solve()
{
	int n = 0;
	scanf("%d", &n);
	ll l = pow(10, n - 1);
	ll r = pow(10, n);
	for (ll i = l; i < r; i++)
		if (check(i) && palindromic(i))
			printf("%lld ", i);
	printf("\n");
}

int main()
{
	int t = 0;
	scanf("%d", &t);
	while (t--)
		solve();
	return 0;
}
