#include<stdio.h>
#define max 100

void input(int n, int arr[])
{
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
}

int highest(int n, int arr[], int high)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > high)
			high = arr[i];
	}
	return high;
}

void output(int n, int arr[], int high)
{
	for(int i = 0; i < n; i++)
		if(arr[i] == highest(n, arr, high))
			printf("%d ", i);
	printf("\n");
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int n = 0, arr[max], high = 0;
			scanf("%d", &n);
		input(n, arr);
		highest(n, arr, high);
		printf("%d\n", highest(n, arr, high));
		output(n, arr, high);	
	}
	return 0;
}
