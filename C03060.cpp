#include <stdio.h>

const int MOD = 1e9 + 7;

int fac[101], pow_2[101];

void facMod()
{
	fac[0] = fac[1] = 1;
	for(int i = 2; i <= 100; ++i)
		fac[i] = (fac[i - 1] % MOD * i % MOD) % MOD;
}

void powMod()
{
	pow_2[0] = 1;
	for(int i = 1; i <= 100; ++i)
		pow_2[i] = (pow_2[i - 1] % MOD * 2 % MOD) % MOD;
}

int main()
{
	facMod();
	powMod();
	int n, k;
	scanf("%d%d", &n, &k);
	int m = fac[n] % pow_2[k];
	printf((m == 0) ? "Yes" : "No");
	return 0;
}