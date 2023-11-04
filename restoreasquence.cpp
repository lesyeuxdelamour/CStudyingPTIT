#include<stdio.h>
#define size 100 // size > 720 run return ve gia tri khac 0

void input(int arr[size][size], int n)
{
	for(int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
}

void hePT(int *a, int *b, int *c, int *d, int *e, int *f)
{
	*a = (*d+*e-*f)/2;
	*b = (*d-*a);
	*c = (*f-*b);
}

void restore(int res[size], int arr[size][size], int n)
{
	if(n == 2)
	{
		printf("%d %d", arr[0][1]/2, arr[1][0]/2);
		return;
	}
	for(int i = 1; i < n-1; i++)
		hePT(&res[i-1], &res[i], &res[i+1], &arr[i-1][i], &arr[i-1][i+1], &arr[i][i+1]);
	for(int k = 0; k < n; k++)
		printf("%d ", res[k]);
}

int main()
{
	int n = 0, arr[size][size], res[size];
		scanf("%d", &n);
	input(arr, n);
	restore(res, arr, n);
	return 0;
}
