#include <stdio.h>
#include <stdlib.h>
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
 
typedef struct time
{
	int t, d;
} time;

int cmp(const void *a, const void *b)
{
	time u = *(time *)a;
	time v = *(time *)b;
	return u.t - v.t;
}

int main()
{
	int n;
	scanf("%d", &n);
	time x[n];
	for(int i = 0; i < n; ++i)
		scanf("%d%d", &x[i].t, &x[i].d);
	qsort(x, n, sizeof(time), cmp);
	int t = 0;
	for(int i = 0; i < n; ++i)
	{
		t = max(t, x[i].t);
		t += x[i].d;
	}
	printf("%d", t);
}