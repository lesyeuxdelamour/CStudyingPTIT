#include<stdio.h>
#define max 100

void input(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void left(int arr[], int n, int t)
{
	for(int j = 0; j < n; j++)
	{
		if(j < n-t) 
			printf("%d ", arr[j+t]);
		else
			printf("%d ", arr[j-n+t]);
	}
}

int main()
{
	int n = 0, arr[max];
		scanf("%d", &n);
	input(arr, n);
	int t = 0;
		scanf("%d", &t);
	left(arr, n, t);
	return 0;
}
