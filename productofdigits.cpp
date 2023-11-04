#include<stdio.h>

int main()
{
		int n;
			scanf("%u", &n);
		int p = 1;
		do{
			p *= n % 10;
			n /= 10;
		}
		while(n != 0);
		printf("%d\n", p);
	return 0;
}
