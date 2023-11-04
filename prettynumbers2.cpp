#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool check(long long n)
{
	int sum = 0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	if(sum%10 == 0)
		return true;
	else
		return false;
}

bool palindromic(long long n)
{
	long long reverse = 0, temp = n;
	int remainder = 0; 
	while (n != 0)
	{
	    remainder = n % 10;
	    reverse = reverse * 10 + remainder;
	    n /= 10;
  	}
	if(reverse == temp)
		return true;
	else
		return false;
}

void count()
{
	int n = 0, count = 0;
		scanf("%d", &n);
	long long l = pow(10, n-1);
	long long r = pow(10, n);
	for(long long i = l; i < r; i++)
		if(check(i) && palindromic(i))
			count++;
	printf("%d\n", count);
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
		count();
	return 0;
} 
