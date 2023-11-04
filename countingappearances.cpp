#include<stdio.h>
#define max 100

void input(int arr[], int app[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		app[arr[i]]++;
	}
}
void count(int arr[], int app[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(app[arr[i]] != 0)
		{
			printf("%d %d\n", arr[i], app[arr[i]]);
			app[arr[i]] = 0;
		}
	}
}

int main()
{
	int n = 0, arr[max] = {}, app[max] = {};
		scanf("%d", &n);
	input(arr, app, n);
	count(arr, app, n);
}
