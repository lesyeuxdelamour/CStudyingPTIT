#include<stdio.h>
#define size 100

int max(int a, int b)
{
	return a > b ? a : b;
}

void input(int *arr, int n)
{
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
}

void measure(int *arr, int n, int *length, int res)
{
	int count = 1;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] < arr[i+1])
			count++;
		if(arr[i] >= arr[i+1] || i == n-1)
		{
			length[i] = count;
			res = max(res, count);
			count = 1;
		}
	}
	printf("%d\n", res);
	for(int i = 0; i < n; i++)
		if(length[i] == res)
		{
			int l = i+1-length[i], r = i+1;
			for(int j = l; j < r; j++)
				printf("%d ", arr[j]);
			printf("\n");
		}
}

void solve(int k)
{
	int n, res = 0;
		scanf("%d", &n);
	int arr[size] = {0}, length[size] = {0};
	input(arr, n);
	printf("Test %d:\n", k+1);
	measure(arr, n, length, res);
}

int main()
{
	int t;
		scanf("%d", &t);
	for(int k = 0; k < t; k++)
		solve(k);
}
