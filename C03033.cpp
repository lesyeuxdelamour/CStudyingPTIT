#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		int val[100001], fre[100001];
		int m = 0;
		for(int i = 2; i*i <= n; ++i)
		{
			if(n%i == 0)
			{
				val[m] = i;
				int cnt = 0;
				while(n%i == 0)
				{
					cnt++;
					n /= i;
				}
				fre[m] = cnt;
				m++;
			}
		}
		if(n > 1)
		{
			val[m] = n;
			fre[m] = 1;
			m++;
		}
		for(int i = 0; i < m; ++i)
		{
			printf("%d^%d", val[i], fre[i]);
			if(i != m - 1)
				printf(" * ");
		}
		printf("\n");
	}
	return 0;
}