#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct tamgiac
{
	double a, b, c, dt;
} tg;

int cmp(const void *a, const void *b)
{
	tg u = *(tg *)a;
	tg v = *(tg *)b;
	return u.dt - v.dt;
}

void add(tg arr[], int n)
{
	for(int i = 0; i < n; ++i)
		scanf("%lf %lf %lf", &arr[i].a, &arr[i].b, &arr[i].c);
}

void area(tg arr[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		double p = (arr[i].a + arr[i].b + arr[i].c)/2;
		arr[i].dt = sqrt(p * (p - arr[i].a) * (p - arr[i].b) * (p - arr[i].c));
	}
}

void list(tg arr[], int n)
{
	qsort(arr, n, sizeof(tg), cmp);
	for(int i = 0; i < n; ++i)
		printf("%.0lf %.0lf %.0lf\n", arr[i].a, arr[i].b, arr[i].c);
}

int main()
{
	int n;
	scanf("%d", &n);
	tg arr[n];
	add(arr, n);
	area(arr, n);
	list(arr, n);
	return 0;
}