#include<stdio.h>

int main()
{
	int i, n, odd = 0, even = 0;
		scanf("%d", &n);
	while(n != 0)
	{
		i=n%10;
		if(i%2 != 0)
			odd+=1;
		else
			even+=1;	
		n/=10;
	}
	printf("%d %d", odd, even);
}
