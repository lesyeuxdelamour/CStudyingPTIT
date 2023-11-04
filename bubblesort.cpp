#include<stdio.h>
#define max 100

void input(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void bubble(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int temp = 0, swapped = false;
		for(int j = 0; j < n-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = true;
			}
		}
		if(swapped)
		{
		printf("Step %d: ", i+1);
			for(int i = 0; i < n; i++)
				printf("%d ", arr[i]);
			printf("\n");
		}
	}
}

int main()
{
	int n = 0, arr[max];
		scanf("%d", &n);
	input(arr, n);
	bubble(arr, n);
}
