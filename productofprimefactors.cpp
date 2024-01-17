#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, ans = 1;
		scanf("%d", &n);
		for(int i = 2; i*i <= n; i++)
		{
			int cnt = 0;
			while(n%i == 0)
			{
				n/=i;
				cnt = 1;	
			}
			if(cnt)	
				ans*=i;
		}
		if(n > 1)
			ans*=n;
		printf("%d\n", ans);
	}
}
