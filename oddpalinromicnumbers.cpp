#include<stdio.h>

long long reverse(long long n)
{
	long long reverse = 0;
	int remainder = 0;
	while (n != 0)
	{
	    remainder = n % 10;
	    reverse = reverse * 10 + remainder;
	    n /= 10;
  	}
	return reverse;
}

int palindromic(long long n)
{
	if(n == reverse(n))
		return 1;
	return 0;
}

int odd(int n)
{
	if(n%2 == 0)
		return 0;
	return 1;
}

int odddigit(long long n)
{
	while(n)
	{
		int digit = n%10;
		if(odd(digit))
			n/=10;
		else
			return 0;
	}
	return 1;
}
	
int oddsumofdigits(long long n)
{
	int sum = 0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	if(odd(sum))
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
		long long n = 0;
			scanf("%lld", &n);
		if(palindromic(n) && odddigit(n) && oddsumofdigits(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

