#include<stdio.h>
#include<math.h>

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		long long n = 0;
		scanf("%lld", &n);
		for(int i = 2; i*i <= n; i++)
		{
			while(n%i == 0)
			{
				printf("%d ", i);
				n/=i;
			}
		}
		if(n > 2)
			printf("%lld", n);
		printf("\n");
	}	
	return 0;
}
