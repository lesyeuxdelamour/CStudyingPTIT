#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	if(n < 2)
		return 0;
	if(n == 2)
		return 1;
	if(n%2 == 0)
		return 0;
	int s = sqrt(n);
	for(int i = 3; i <= s; i+=2)
		if(n%i == 0)
			return 0;
	return 1;
}

int isPRIME(int n)
{
	int sum = 0;
	while(n)
	{
		int tmp = n%10;
		if(!isPrime(tmp))
			return 0;
		sum += tmp;
		n /= 10;
	}
	return isPrime(sum);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; ++i)
			if(isPRIME(i) && isPrime(i))
				cnt++;
		printf("%d\n", cnt);
	}
}