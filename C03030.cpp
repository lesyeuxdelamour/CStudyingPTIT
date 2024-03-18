#include<stdio.h>
#include<math.h>

int nondecrease(int n)
{
	int tmp = n%10;
	n /= 10;
	while(n)
	{
		if(tmp < n%10)
			return 0;
		tmp = n%10;
		n /= 10;
	}
	return 1;
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
		listing();
}
