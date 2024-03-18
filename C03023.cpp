#include <stdio.h>

int check(int n)
{
	int tmp = n, rev = 0, rem;
	while(n)
	{
		rem = n%10;
		if(rem == 9)
			return 0;
		rev = rev*10 + rem;
		n /= 10;
	}
	return rev == tmp;
}

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i < n; ++i)
		if(check(i))
		{
			printf("%d ", i);
			cnt++;
		}
	printf("\n%d", cnt);
	return 0;
}