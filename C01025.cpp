#include<stdio.h>
#define size 4

int max(int arr[])
{
	int max = arr[0];
	for(int i = 0; i < size; i++)
		if(max < arr[i])
			max = arr[i];
	return max;
}

int min(int arr[])
{
	int min = arr[0];
	for(int i = 0; i < size; i++)
		if(min > arr[i])
			min = arr[i];
	return min;
}

void solve(int x[], int y[])
{
	for(int i = 0; i < size; i++)
		scanf("%d%d", &x[i], &y[i]);
	int a = max(x) - min(x);
	int b = max(y) - min(y);
	if(a < b)
		printf("%d", b*b);
	else
		printf("%d", a*a);
}

int main()
{
	int x[size], y[size];
	solve(x, y);
	return 0;
}
