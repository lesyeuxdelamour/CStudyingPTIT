#include <stdio.h>

int prime(int n)
{
	if(n < 2)
		return 0;
	if(n == 2)
		return 1;
	if(n%2 == 0)
		return 0;
	for(int i = 3; i*i <= n; i+=2)
		if(n%i == 0)
			return 0;
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	if(n == 0 || n == 1)
		printf("%d", n);
	for(int i = 2; i*i <= n; ++i)
		while(n%i == 0)
		{
			printf("%d", i); 
			if(!prime(n))
				printf("x");
			n/=i;
		}
	if(n > 1)
		printf("%d", n);
	return 0;
}