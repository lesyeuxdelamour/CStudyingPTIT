#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	if (m <= n)
	{
		int cnt = n;
		for (int i = 0; i < m; ++i)
		{
			int k = 0;
			for (int j = cnt; j >= 1; --j, ++k)
				printf("%d", j);
			for (int j = 2; j < 2 + (n - k); ++j)
				printf("%d", j);
			cnt--;
			printf("\n");
		}
	}
	else
	{
		int cnt = m;
		for (int i = n; i < m; i++)
		{
			for (int j = cnt; j > cnt - n; --j)
				printf("%d", j);
			cnt--;
			printf("\n");
		}
		for (int i = 0; i < n; ++i)
		{
			int k = 0;
			for (int j = cnt; j >= 1; --j, ++k)
				printf("%d", j);
			for (int j = 2; j < 2 + (n - k); ++j)
				printf("%d", j);
			cnt--;
			printf("\n");
		}
	}
}