#include <stdio.h>
#include <stdlib.h>

//Appearcance Sort:

struct tag
{
	int val, pos, app;
};

int cmpval(const void *a, const void *b)
{
	struct tag u = *(struct tag *)a;
	struct tag v = *(struct tag *)b;
	if (u.val == v.val)
		return u.pos > v.pos;
	return u.val > v.val;
}

int cmpapp(const void *a, const void *b)
{
	struct tag u = *(struct tag *)a;
	struct tag v = *(struct tag *)b;
	if (u.app == v.app)
		return u.pos > v.pos;
	return u.app < v.app;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		struct tag arr[n], sorted[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i].val);
			arr[i].pos = i;
		}
		qsort(arr, n, sizeof(struct tag), cmpval);
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			sorted[count].app = 1;
			if (arr[i].val == arr[i + 1].val)
			{
				sorted[count].pos = arr[i].pos;
				while (arr[i].val == arr[i + 1].val)
				{
					sorted[count].val = arr[i++].val;
					sorted[count].app++;
				}
			}
			else
			{
				sorted[count].pos = arr[i].pos;
				sorted[count].val = arr[i].val;
			}
			count++;
		}
		qsort(sorted, count, sizeof(struct tag), cmpapp);
		for (int i = 0; i < count; ++i)
		{
			for (int x = 0; x < sorted[i].app; ++x)
				printf("%d ", sorted[i].val);
		}
		printf("\n");
	}
	return 0;
}

/*
2

8

2 5 2 8 5 6 8 8

10

2 5 2 6 -1 9999999 5 8 8 8
 */
