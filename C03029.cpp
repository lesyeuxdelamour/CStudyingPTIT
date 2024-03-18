#include<stdio.h>

int specialeven(long long n)
{
	while(n != 0)
	{
		if(n%2 == 0)
			n/=10;
		else
			return 0;
	}
	return 1;
}
	
int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0;
			scanf("%lld", &n);
		if(specialeven(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
