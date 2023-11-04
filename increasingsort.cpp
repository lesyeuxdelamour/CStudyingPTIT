#include<stdio.h>
#define max 100

void input(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void incr(int arr[], int n, int temp)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void output(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int n = 0, arr[max];
		scanf("%d", &n);
	input(arr, n);
	int temp = 0;
	incr(arr, n, temp);
	output(arr, n);
	return 0;
}
