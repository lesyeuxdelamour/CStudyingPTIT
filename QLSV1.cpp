#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
1
2
nguyen van hai
8.5 5.5 7.5
tran van tuan
8.5 .50 9.0
2
2
tran van nam
5.5 5.0 6.0
3
*/

typedef struct SinhVien
{
	int stt;
	char ten[31];
	double a, b, c, avg;
} sv;

sv arr[100001];
int cnt = 1;

int cmp(const void *a, const void *b)
{
	sv u = *(sv *)a;
	sv v = *(sv *)b;
	return u.avg - v.avg; 
}

void add()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		fflush(stdin);
		arr[cnt].stt = cnt;
		gets(arr[cnt].ten);
//		fgets(arr[cnt].ten, 31, stdin);
//		arr[cnt].ten[strlen(arr[cnt].ten) - 1] = '\0';
		scanf("%lf%lf%lf", &arr[cnt].a, &arr[cnt].b, &arr[cnt].c);
		arr[cnt].avg = (arr[cnt].a + arr[cnt].b + arr[cnt].c)/3;
		cnt++;	
	}
	printf("%d\n", n);
}

void change()
{
	int n;
	scanf("%d", &n);
	fflush(stdin);
	gets(arr[n].ten);
//	fgets(arr[n].ten, 31, stdin);
//	arr[n].ten[strlen(arr[n].ten) - 1] = '\0';
	scanf("%lf%lf%lf", &arr[n].a, &arr[n].b, &arr[n].c);
	arr[n].avg = (arr[n].a + arr[n].b + arr[n].c)/3;
	printf("%d\n", n);
}

void list()
{
	qsort(arr + 1, cnt - 1, sizeof(sv), cmp);
	for(int i = 1; i < cnt; ++i)
		printf("%d %s %.1lf %.1lf %.1lf\n", arr[i].stt, arr[i].ten, arr[i].a, arr[i].b, arr[i].c);
}

int main()
{
	int option = 0;
	while(option != 3)
	{
		fflush(stdin);
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