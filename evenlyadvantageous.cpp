#include<stdio.h>
#include<stdbool.h>

bool evenCheck(long long n)
{
	return n%2 == 0;
}

bool evenlyadvantage(long long n)
{
	int even = 0, odd = 0, d;
	while(n)
	{
		d = n%10;
		n/=10;
		if(evenCheck(d))
			even++;
		else
			odd++;
	}
	if(even > odd)
		return true;
	else
		return false;
}
int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0;
			scanf("%lld", &n);
		if(evenCheck(n) && evenlyadvantage(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

