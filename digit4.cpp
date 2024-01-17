#include <stdio.h>
#include <math.h>

int check(int n)
{
	int tmp = n;
	int sum = 0, rev = 0, rem;
	while(n)
	{
		rem = n%10;
		if(rem == 4)
			return 0;
		rev = rev*10 + rem;
		sum += rem;
		n/=10;
	}
	return rev == tmp && sum%10 == 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int l = pow(10, n - 1);
		int r = pow(10, n);
		for(int i = l; i < r; ++i)
			if(check(i))
				printf("%d ", i);
		printf("\n");
	}
	return 0;
}