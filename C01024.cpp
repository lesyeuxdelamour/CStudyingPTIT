#include<stdio.h>

int firstandlast(int n)
{
	int m = n % 10;
	while(n >= 10)
		n /= 10;
	if(m == n)
		return 1;
	else
		return 0;
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int n = 0;
			scanf("%d", &n);
		if(firstandlast(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
