#include<stdio.h>

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0; int product = 1, temp = 0;
			scanf("%lld", &n);
		for(int i = 2; i*i <= n; i++)
		{
			while(n%i == 0)
			{
				n/=i;
				if(i != temp)
				{
					temp = i;
					product*=temp;
				}		
			}
		}
		if(n > 2)
			product*=n;
		printf("%d\n", product);
	}
}
