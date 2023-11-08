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
	int n, step = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		for(int j = i; j > 0; --j)
		{
			if(arr[j] < arr[j - 1])
				swap(&arr[j], &arr[j - 1]);
		}
		printf("Step %d: ", step);
		for(int j = 0; j <= i; ++j)
			printf("%d ", arr[j]);
		printf("\n");
		step++;
	}			
	return 0;
}