#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct SinhVien
{
	int stt;
	char ten[31];
	double a, b, c;
} sv;

sv arr[100001];
int cnt = 1;

void add()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("\n");
		arr[cnt].stt = cnt;
		gets(arr[cnt].ten);
		scanf("%lf%lf%lf", &arr[cnt].a, &arr[cnt].b, &arr[cnt].c);
		cnt++;	
	}
	printf("%d\n", n);
}

void change()
{
	int n;
	scanf("%d\n", &n);
	gets(arr[n].ten);
	scanf("%lf%lf%lf", &arr[n].a, &arr[n].b, &arr[n].c);
	printf("%d\n", n);
}

void list()
{
	for(int i = 1; i < cnt; ++i)
		if(arr[i].a < arr[i].b && arr[i].b < arr[i].c)
			printf("%d %s %.1lf %.1lf %.1lf\n", arr[i].stt, arr[i].ten, arr[i].a, arr[i].b, arr[i].c);
}

int main()
{
	int option = 0;
	while(option != 3)
	{
		scanf("%d", &option);
		if(option == 1)
			add();
		if(option == 2)
			change();
		if(option == 3)
			list();
	}
	return 0;
}