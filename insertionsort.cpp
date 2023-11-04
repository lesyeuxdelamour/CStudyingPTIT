#include<stdio.h>
#define max 100

void input(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void ins(int arr[], int n, int step)
{
	for(int i = 0; i < n; i++)
	{
		int temp = 0;
		for(int j = i; j > 0; j--)
		{
			if(arr[j] < arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}	
		}
		printf ("Step %d: ", i);
		for (int j = 0; j <= i; j++)
			printf ("%d ", arr[j]);
		printf ("\n");
	}
}
int main()
{
	int n = 0, arr[max];
		scanf("%d", &n);
	input(arr, n);
	int step = 0;
	ins(arr, n, step);
}

