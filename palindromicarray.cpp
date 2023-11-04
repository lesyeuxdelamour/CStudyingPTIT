#include<stdio.h>
#define max 100

void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void palindromic(int a[], int n)
{
	int palindromic = 0;
	for(int i = 0; i < n/2 && n != 0; i++)
	{
		if(a[i] != a[n-i-1])
		{
			palindromic = 1;
			break;
		}
	}
	if(palindromic == 1)
		printf("NO\n");
	else
		printf("YES\n");
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int n = 0, a[max] = {};
			scanf("%d", &n);
		input(a, n);
		palindromic(a, n);	
	}
}
