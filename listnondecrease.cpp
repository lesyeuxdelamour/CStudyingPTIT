#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool nondecrease(int n)
{
	int i = n%10;
	n/=10;
	while(n > 0)
	{
		if(i < n%10)
			return false;
		i = n%10;
		n/=10;
	}
	return true;
}

void listing()
{
	int n = 0;
		scanf("%d", &n);
	int l = pow(10, n-1);
	int r = pow(10, n);
	for(int i = l; i < r; i++)
		if(nondecrease(i))
			printf("%d ", i);
	printf("\n");
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		listing();
	}
}
