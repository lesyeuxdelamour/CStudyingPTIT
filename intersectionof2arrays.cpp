#include<stdio.h>
#define max 100

void input1(int arr1[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
}

void input2(int arr2[], int m)
{
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
}

void intersec(int arr1[], int n, int arr2[], int m, int inter[], int t)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(arr1[i] == arr2[j])
			{
				inter[t] = arr1[i];
				t++;
			}
		}
	}
	for(int k = 0; k < t; k++)
	{
		int temp = 0;
		for(int l = k+1; l < t; l++)
		{
			if(inter[k] > inter[l])
			{
				temp = inter[k];
				inter[k] = inter[l];
				inter[l] = temp;
			}
		}
		int check = 1;
		for(int g = 0; g < k; g++)
		{
			if(inter[k] == inter[g] && k != g)
			{
				check = 0;
				break;
			}
		}
		if(check)
			printf("%d ", inter[k]);
	}
}

int main()
{
	int n = 0, m = 0 ,arr1[max], arr2[max];
		scanf("%d%d", &n, &m);
	input1(arr1, n);
	input2(arr2, m);
	int t = 0, inter[max];
	intersec(arr1, n, arr2, m, inter, t);
	return 0;
}

