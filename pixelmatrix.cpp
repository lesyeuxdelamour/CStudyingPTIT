#include <stdio.h>

typedef long long ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		int arr[n][m], r1[n], r2[n], c1[m], c2[m];
		for(int i = 0; i < n; ++i)
			r1[i] = r2[i] = 0;
		for(int i = 0; i < m; ++i)
			c1[i] = c2[i] = 0;
		for(int i = 0; i < n; ++i)
		{
			getchar();
			for(int j = 0; j < m; ++j)
			{
				arr[i][j] = getchar() - '0';
				if(arr[i][j] == 1)
				{
					r1[i]++;
					c1[j]++;
				}
				if(arr[i][j] == 2)
				{
					r2[i]++;
					c2[j]++;
				}
			}
		}
		ll cnt = 0;
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j)
			{
				if(arr[i][j] == 1)
					cnt += r2[i] * c2[j];
				if(arr[i][j] == 2)
					cnt += r1[i] * c1[j];
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}