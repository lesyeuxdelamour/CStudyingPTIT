#include<stdio.h>
#define max 100

int prime(int n)
{
	for(int i = 2; i*i <=n; i++)
		if(n%i == 0)
			return 0;
	return n > 1;
}

void input(int n, int arr[])
{
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
}

void output(int n, int arr[])
{
	for(int i = 0; i < n; i++)
		if(prime(arr[i]))
			printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int n = 0, arr[max];
			scanf("%d", &n);
		input(n, arr);
		output(n, arr);		
	}
	
}
