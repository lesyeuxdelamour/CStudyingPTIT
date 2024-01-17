#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, p;
		scanf("%d%d", &n, &p);
		int cnt = 0;
		for(int i = 2; i <= n; ++i)
		{
			int tmp = i;
			while(tmp%p == 0)
			{
				cnt++;
				tmp /= p;
			}
		}
		printf("%d\n", cnt);
		}
	}
	return 0;
}