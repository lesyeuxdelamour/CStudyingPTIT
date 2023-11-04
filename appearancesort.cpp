#include<stdio.h>
#include<stdlib.h>
#define size 100001

int t, n;
int arr[size], pos[size], id[size], app[size], val[size], tag[size], x[size];

int cmppos(const void *a, const void *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	if(arr[u] < arr[v])	return 1;
	if(arr[u] > arr[v])	return -1;
	return 0;
}

int cmpapp(const void *a, const void *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	if(app[u] < app[v] || app[u] == app[v] && tag[u] > tag[v]) 
		return 1;
	else
		return -1;
}

void solve()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		pos[i] = i;
		id[i] = i;
	}
	qsort(pos, n, sizeof(int), cmppos);
	int m = 0;
	app[m] = 1;
	val[m] = arr[pos[0]];
	tag[m] = id[pos[0]];
	for(int i = 1; i < n; ++i)
	{
		if(arr[pos[i]] == arr[pos[i-1]])
			app[m]++;
		else
		{
			m++;
			app[m] = 1;
			val[m] = arr[pos[i]];
			tag[m] = id[pos[i]];
		}
	}
	for(int i = 0; i < m+1; ++i) 
		x[i] = i;
	qsort(x, m+1, sizeof(int), cmpapp);
	for(int i = 0; i < m+1; ++i)
		for(int j = 0; j < app[x[i]]; ++j)
			printf("%d ", val[x[i]]);
	printf("\n");
}

int main()
{
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}

