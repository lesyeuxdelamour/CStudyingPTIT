#include<stdio.h>
#include<stdlib.h>

typedef struct app
{
	int val, fre;
} app;

int cmpval(const void *a, const void *b)
{
    int u = *(int *)a;
    int v = *(int *)b;
    return u - v;
}

int cmpfre(const void *a, const void *b)
{
    app u = *(app *)a;
	app v = *(app *)b;
	return v.fre - u.fre;
}

int nondecrease(int n)
{
	int tmp = n%10;
	n /= 10;
	while(n)
	{
		if(tmp < n%10)
			return 0;
		tmp = n%10;
		n /= 10;
	}
	return 1;
}

int main()
{
	int arr[100001];
	app list[100001];
	int cnt = 0;
	while(1)
	{
		if(scanf("%d", &arr[cnt]) == 1) // != EOF
			cnt++;
		else
			break;
	}
	qsort(arr, cnt, sizeof(int), cmpval);
	int cnt2 = 0;
	for(int i = 0; i < cnt; ++i)
	{
		if(nondecrease(arr[i]))
		{
			list[cnt2].val = arr[i];
			list[cnt2].fre = 1;
			while(arr[i] == arr[i + 1])
			{
				list[cnt2].fre++;
				i++;
			}
			cnt2++;
		}
	}
	qsort(list, cnt2, sizeof(app), cmpfre);
	for(int i = 0; i < cnt2; ++i)
	{
		printf("%d %d\n", list[i].val, list[i].fre);
	}
	return 0;
}