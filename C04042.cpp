#include <stdio.h>
#include <stdlib.h>

typedef struct ele
{
	int val, pos;
} ele;

int min(int a, int b)
{
	return a < b ? a : b;
}

int cmpval(const void *a, const void *b)
{
    ele u = *(ele *)a;
    ele v = *(ele *)b;
    if(u.val == v.val)
    	return u.pos - v.pos;
    return u.val - v.val;
}

int cmppos(const void *a, const void *b)
{
    ele u = *(ele *)a;
    ele v = *(ele *)b;
    return u.pos - v.pos;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		ele arr[n];
		for(int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i].val);
			arr[i].pos = i;
		}
		qsort(arr, n, sizeof(ele), cmpval);
		int idx = n;
		for(int i = 0; i < n - 1; ++i)
		{
			if(arr[i].val == arr[i + 1].val)
			{ 	
				idx = min(idx, arr[i].pos);
				while(arr[i].val == arr[i + 1].val)
					i++;
			}
		}
		qsort(arr, n, sizeof(ele), cmppos);
		if(idx == n)
			printf("NO\n");
		else
			printf("%d\n", arr[idx]);	
	}
	return 0;
}