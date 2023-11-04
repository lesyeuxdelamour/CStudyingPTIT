#include<stdio.h>
#define max 100

void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void appear(int a[], int once[], int n, int num, int test)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			if(a[i] == a[j] && i != j)
			{
				test = 1;
				break;
			}
		}
		if(test == 0)
		{
			once[num] = a[i];
			num++;			
		}
		else
			test = 0;
	}
	printf("%d\n", num);
	for(int k = 0; k < num; k++)	
		printf("%d ", once[k]);
}

int main()
{
	int n = 0, a[max];
		scanf("%d", &n);
	input(a, n);
	int num = 0, test = 0, once[max];
	appear(a, once, n, num, test);
}
