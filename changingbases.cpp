#include <stdio.h>
#include <string.h>

char val(int n)
{
	if(n < 10)
		return n + '0';
	return n - 10 + 'A';
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, base;
		scanf("%d%d", &n, &base);
		char ans[100];
		int cnt = 0;
		while(n)
		{
			int x = n%base;
			ans[cnt++] = val(x);
			n /= base;
		}
		for(int i = cnt - 1; i >= 0; --i)
			printf("%c", ans[i]);
		printf("\n");
	}
	return 0;
}