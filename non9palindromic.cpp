#include<stdio.h>

int reverse(int n)
{
	int reverse = 0, remainder = 0;
	while (n != 0)
	{
	    remainder = n % 10;
	    reverse = reverse * 10 + remainder;
	    n /= 10;
  	}
	return reverse;
}

int palindromic(int n)
{
	if(n == reverse(n))
		return 1;
	return 0;
}

int check(int n)
{
	while(n)
	{
	    if(n%10 == 9)
	        return 0;
	    else
	        n/=10;
	}
	return 1;
}

int main()
{
	int n = 0, count = 0;
		scanf("%4u", &n);
	for(int i = 2; i < n; i++)
	{
		if(palindromic(i) && check(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
}


