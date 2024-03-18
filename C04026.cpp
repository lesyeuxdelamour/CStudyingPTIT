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
	int min_id;
	for(int i = 0; i < n-1; i++)
	{
		min_id = i;
		for(int j = i+1; j < n; ++j)
			if(arr[j] < arr[min_id])
				min_id = j;
		swap(&arr[i], &arr[min_id]);
		printf("Step %d: ", step);
		for(int i = 0; i < n; ++i)
			printf("%d ", arr[i]);
		printf("\n");
		step++;
	}			
	return 0;
}
