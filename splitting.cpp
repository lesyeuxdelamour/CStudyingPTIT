#include<stdio.h>
#define max 100

void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void split(int a[], int even[], int odd[], int n, int o, int e)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 != 0)
		{
			odd[o] = a[i];
			o++;
		}
		else
		{
			even[e] = a[i];
			e++;
		}
	}
	for(int k = 0; k < e; k++)
	{
		printf("%d ", even[k]);
	}
	printf("\n");
	for(int j = 0; j < o; j++)
	{
		printf("%d ", odd[j]);
	}
}

int main()
{
	int n = 0, o = 0, e = 0, a[max], even[max], odd[max];
		scanf("%d", &n);
	input(a, n);
	split(a, even, odd, n, o, e);
	return 0;
}
