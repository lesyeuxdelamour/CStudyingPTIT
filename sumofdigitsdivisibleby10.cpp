#include<stdio.h>

int main()
{
	int t;
		scanf("%d", &t);
	while(t--)
	{
		int n, s = 0;
			scanf("%d", &n);
		do
		{
			s += n % 10;
			n /= 10;
		}
		while(n != 0);
		if(s%10 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
