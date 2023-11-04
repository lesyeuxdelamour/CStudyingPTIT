#include<stdio.h>
#include<stdlib.h>
#define size 200

int min(int a, int b)
{
	return a < b ? a : b;
}

void input(int *arr, int *temparr, int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		temparr[i] = arr[i];
	}
}

int cmp(const void *a, const void *b) 
{
    int x = *(int*)a;
    int y = *(int*)b;
    return x > y ? 1 : -1;
}

void solve()
{
	int n, arr[size], temparr[size];
		scanf("%d", &n);
	input(arr, temparr, n);
	qsort(arr, n, sizeof(int), cmp);
	int start = 0, end = n-1, step = 0;
	while(start < end)
	{
		step+=abs(arr[end]-arr[start]);
		start++;
		end--;
	}
	if(n%2)
		printf("%d %d", step, arr[n/2]);
	else
		for(int i = 0; i < n; i++)
			if(temparr[i] == arr[n/2] || temparr[i] == arr[n/2-1])
			{
				printf("%d %d", step, temparr[i]);
				break;
			}
}

int main()
{
	solve();
	return 0;
}
