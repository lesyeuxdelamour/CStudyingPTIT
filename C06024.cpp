#include<stdio.h>
#include<string.h>

void trans(char *num, int *arr, int n)
{
	for(int i = 0; i < n; ++i)
		arr[i] = num[i] - '0';
}

void strrev(char *arr, int n)
{
	int l = 0, r = n-1;
	while(l < r)
	{
		char temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		++l; --r;
	}
}

void add(char *num1, char *num2)
{
	int n = strlen(num1), m = strlen(num2);
	int left = 0, count = 0;
	int a[n], b[n], c[n+1];
	strrev(num1, n);
	trans(num1, a, n);
	strrev(num2, m);
	trans(num2, b, m);
	for(int i = m; i < n; ++i)
		b[i] = 0;
	for(int i = 0; i < n; ++i)
	{
		int temp = a[i] + b[i] + left;
		c[count++] = temp%10;
		left = temp/10;
	}
	if(left == 1)
		c[count++] = left;
	for(int i = count-1; i >= 0; --i)
		printf("%d", c[i]);
	printf("\n");
}

int main()
{
	int t;
		scanf("%d", &t);
		fflush(stdin);
	while(t--)
	{
		char num1[500], num2[500];
			scanf("%s%s", num1, num2);
		if(strlen(num1) < strlen(num2))
			add(num2, num1);
		else
			add(num1, num2);
	}
	return 0;
}
