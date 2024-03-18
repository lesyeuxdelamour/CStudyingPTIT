#include <stdio.h>

int main()
{
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int x, a[n + 1];
	for(int i = 1; i <= n + 1; ++i)
		a[i] = 0;
	for(int i = 1; i <= m; ++i)
	{
		scanf("%d", &x);
		int l = (x - k > 0) ? (x - k) : 1; 
		int r = (x + k < n) ? (x + k) : n;
		for(int j = l; j <= r; ++j)
			a[j] = 1;
	}
	int cnt = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(!a[i])
		{
			int e = (k*2 + 1 < n) ? (k*2 + 1) : n;
			for(int j = i; j <= e; ++j)
				a[j] = 1;
			cnt++;
			i += e - 1;;
		}
	}
	printf("%d", cnt);
}