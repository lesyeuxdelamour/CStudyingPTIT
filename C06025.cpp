#include<stdio.h>
#include<string.h>
#include<stdbool.h>

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

void sub(char *num1, char *num2)
{
	int n = strlen(num1), m = strlen(num2);
	int loan = 0, count = 0;
	int a[n], b[n], c[n];
	strrev(num1, n);
	trans(num1, a, n);
	strrev(num2, m);
	trans(num2, b, m);
	for(int i = m; i < n; ++i)
		b[i] = 0;
	for(int i = 0; i < n; ++i)
	{
		int temp = a[i] - b[i] - loan;
		if(temp < 0)
		{
			loan = 1;
			c[count++] = temp+10;
		}
		else
		{
			c[count++] = temp;
			loan = 0;
		}
	}		
	bool zero = true;
	for(int i = count-1; i >= 0; --i)
	{
		if(zero && c[i])
			zero = false;
		if(!zero)
			printf("%d", c[i]);
	}
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
		if(strcmp(num1, num2) == 0)
			printf("0\n");
		else if(strlen(num1) < strlen(num2) || strlen(num1) == strlen(num2) && strcmp(num1, num2) < 0)
			sub(num2, num1);
		else
			sub(num1, num2);
	}
	return 0;
}
