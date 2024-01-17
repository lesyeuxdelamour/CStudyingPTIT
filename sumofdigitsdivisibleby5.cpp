#include <stdio.h>

int check(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	return sum%5 == 0;
}

int prime(int n)
{
	if(n < 2)
		return 0;
	if(n == 2)
		return 1;
	if(n%2 == 0)
		return 0;
	for(int i = 3; i*i <= n; ++i)
		if(n%i == 0)
			return 0;
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 5; i < n; ++i)
		if(check(i) && prime(i))
		{
			printf("%d ", i);
			cnt++;
		}
	printf("\n%d", cnt);
	return 0;
}