#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct SinhVien
{
	int stt;
	char ten[31];
	char ngaysinh[11];
	double a, b, c, tong;
} SV;

int cmp(const void *a, const void *b)
{
	SV u = *(SV *)a;
	SV v = *(SV *)b;
	return u.tong < v.tong;
}

int main()
{
	int n;
	scanf("%d", &n);
	SV arr[n];
	for(int i = 0; i < n; ++i)
	{
		scanf("\n");
		arr[i].stt = i + 1;
		gets(arr[i].ten);
		gets(arr[i].ngaysinh);
		scanf("%lf%lf%lf", &arr[i].a, &arr[i].b, &arr[i].c);
		arr[i].tong = arr[i].a + arr[i].b + arr[i].c;
	}
	qsort(arr, n, sizeof(SV), cmp);
	for(int i = 0; i < n; ++i)
		printf("%d %s %s %.1lf\n", arr[i].stt, arr[i].ten, arr[i].ngaysinh, arr[i].tong);
	return 0;
}