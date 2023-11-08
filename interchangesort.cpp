#include<stdio.h>

int arr[101];

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n, step = 1;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	for(int i = 0; i < n - 1; ++i)
	{
		for(int j = i + 1; j < n; ++j)
			if(arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
		printf("Step %d: ", step);
		for(int i = 0; i < n; ++i)
			printf("%d ", arr[i]);
		printf("\n");
		step++;
	}			
	return 0;
}
