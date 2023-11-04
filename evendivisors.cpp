#include<stdio.h>

int countdivisors(int n)
{
	int count = 0;
	for(int i = 1; i*i <= n; i++)
		if(n%i == 0)
		{
			count++;
			int j = n/i;
			if(i != j)
			count++;
		}
	return count;
}
int main()
{
	int t = 0;
		scanf("%d", &t);
	if(t > 100)
		return 0;
	else
		while(t--)
		{
			int n = 0;
				scanf("%d", &n);
			if(n%2 != 0)
				printf("0\n");
			else
				printf("%d\n", countdivisors(n/2));
		}
	return 0;
}
