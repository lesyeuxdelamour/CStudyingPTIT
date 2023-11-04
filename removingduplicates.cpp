#include<stdio.h>
#define max 100

void input(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void duplicates(int arr[], int app[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			if(arr[i] == arr[j] && i != j)
			{
				arr[j] = 0;
			}
		}
		if(arr[i] != 0)
			printf("%d ", arr[i]);
	}
}

int main()
{
	int n = 0, arr[max] = {}, app[max] = {};
		scanf("%d", &n);
	input(arr, n);
	duplicates(arr, app, n);
}	
