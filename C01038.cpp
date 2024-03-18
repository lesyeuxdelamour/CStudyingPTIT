#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0, first, last, temp, digits = 0;
		scanf("%d", &n);
	temp = n;	
	while(temp != 0)
	{
		digits++;
		temp/=10;
	}
	temp = n;
	last = n%10;
	while(temp != 0)
	{
		if(temp > 0 && temp < 10)
			first = temp;
		temp/=10;
	}
	n = n+(last-first)*(pow(10, digits-1)-1);
	printf("%d", n);
	return 0;
}

