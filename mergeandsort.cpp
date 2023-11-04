#include<stdio.h>
#define max 100

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void input(int arr[max], int n)
{
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
}

void increase(int arr[max], int n)
{
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
}

void decrease(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(arr[i] < arr[j])
				swap(&arr[i], &arr[j]);
}

void output(int arr1[max], int arr2[max], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d %d ", arr1[i], arr2[i]);
	printf("\n");
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n = 0, arr1[max], arr2[max];
			scanf("%d", &n);
		input(arr1, n);
		input(arr2, n);
		increase(arr1, n);
		decrease(arr2, n);
		printf("Test %d:\n", i+1);
		output(arr1, arr2, n);
	}
	return 0;
}


