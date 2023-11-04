#include<stdio.h>
#define max 100

void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void reverse(int a[], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", a[n-i-1]);
}

int main()
{
	int n = 0, a[max] = {};
		scanf("%d", &n);
	input(a, n);
	reverse(a, n);	
}
