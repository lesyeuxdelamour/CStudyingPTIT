#include<stdio.h>
#define max 100

void input(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void inter(int arr[], int n, int temp, int step)
{
	for(int i = 0; i < n-1; i++)
	{
		int min_id = i;
		for(int j = i+1; j < n; j++)
		{
			if(arr[min_id] > arr[j])
				min_id = j;
		}
		temp = arr[min_id];
		arr[min_id] = arr[i];
		arr[i] = temp;
		step++;
		printf("Step %d: ", step);
		for(int i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
}
int main()
{
	int n = 0, arr[max];
		scanf("%d", &n);
	input(arr, n);
	int temp = 0, step = 0;
	inter(arr, n, temp, step);
	return 0;
}
