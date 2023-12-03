#include<stdio.h>

int arr[101];

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n, step = 1;
	scanf("%d", &n);
	for(int i = 0 ; i < n; ++i)
		scanf("%d", &arr[i]);
	for(int i = 0; i < n - 1; ++i)
	{
		int flag = 0;
		for(int j = 0; j < n - i - 1; ++j)
			if(arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		if(flag)
		{
			printf("Step %d: ", step);
			for(int k = 0; k < n; k++)
				printf("%d ", arr[k]);
			printf("\n");
			step++;
		}
	}
	return 0;
}