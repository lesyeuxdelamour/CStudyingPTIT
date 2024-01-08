7l'-ơ0,omiunyadzwd58s'tr687#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX 1000001
#define MOD 1e9 + 7
#define size 101

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

bool prime[MAX];
ull fibo[93], factorial[21], val[78498];

// sàng số nguyên tố
void sievePrime()
{
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for (int p = 2; p * p < MAX; ++p)
		if (prime[p])
			for (int i = p * p; i < MAX; i += p)
				prime[i] = false;
}

// quy hoạch động mảng số Fibonacci
void dpFibonacci()
{
	fibo[0] = 0;
	fibo[1] = fibo[2] = 1;
	for (int i = 3; i < 93; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}

// quy hoạch động mảng giai thừa
void dpFactorial()
{
	factorial[0] = 1;
	for (int i = 1; i <= 20; ++i)
		factorial[i] = factorial[i - 1] * i;
}

// mảng số nguyên tố
void primeArray()
{
	int count = 0;
	for (int i = 2; i < MAX; ++i)
		if (prime[i])
			val[count++] = i;
}

// comperator tăng
int cmpIncrease(const void *a, const void *b)
{
	int u = *(int *)a;
	int v = *(int *)b;
	return u - v;
}

// comperator giảm
int cmpDecrease(const void *a, const void *b)
{
	int u = *(int *)a;
	int v = *(int *)b;
	return v - u;
}

// hoán giá trị 2 con trỏ
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// trả về giá trị lớn, nhỏ hơn
int max(int a, int b)
{
	return a > b ? a : b;
}

int min(int a, int b)
{
	return a < b ? a : b;
}

// UCLN, BCNN
int gcd(int a, int b) // giai thuat euclid
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

// phần tử lớn, nhỏ nhất của mảng
int maxEle(int *arr, int n)
{
	int res = -1e9;
	for (int i = 0; i < n; ++i)
		res = max(res, arr[i]);
	return res;
}

int minEle(int *arr, int n)
{
	int res = 1e9;
	for (int i = 0; i < n; ++i)
		res = min(res, arr[i]);
	return res;
}

// vị trí phần tử lớn, bé nhất (không phải duy nhất)
int maxID(int *arr, int n)
{
	int max_id = 0;
	for (int i = 1; i < n; ++i)
		if (arr[i] > arr[max_id])
			max_id = i;
	return max_id;
}

int minID(int *arr, int n)
{
	int min_id = 0;
	for (int i = 1; i < n; ++i)
		if (arr[i] < arr[min_id])
			min_id = i;
	return min_id;
}

// viết thường, HOA cả xâu
void strlower(char *str)
{
	for (int i = 0; i < strlen(str); ++i)
		str[i] = tolower(str[i]);
}

void strupper(char *str)
{
	for (int i = 0; i < strlen(str); ++i)
		str[i] = toupper(str[i]);
}

// ma trận chuyển vị
void transporeMatrix(int arr[size][size], int arr_t[size][size], int m, int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			arr_t[i][j] = arr[j][i];
}

// nhân ma trận
void matrixProduct(int arr1[size][size], int arr2[size][size], int arr1x2[size][size], int m, int n, int p)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			arr1x2[i][j] = 0;
			for (int k = 0; k < n; ++k)
				arr1x2[i][j] += arr1[i][k] * arr2[k][j];
			printf("%d ", arr1x2[i][j]);
		}
		printf("\n");
	}
}

void hePTbac2(int *a, int *b, int *c, int *d, int *e, int *f)
{
	*a = (*d + *e - *f) / 2;
	*b = (*d - *a);
	*c = (*f - *b);
}

int tohopchap2(int n)
{
	return n * (n - 1) / 2;
}

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
		return u.pos - v.pos;
	return u.val - v.val;
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
