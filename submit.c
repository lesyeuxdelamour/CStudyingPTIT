#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000001
#define size 100

typedef long long ll;
typedef unsigned long long ull;

bool prime[MAX];
ull fibo[93], val[78498];

//sàng số nguyên tố
void sievePrime()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p < MAX; ++p)
        if (prime[p])
            for (int i = p * p; i < MAX; i += p)
                prime[i] = false;
}

//quy hoạch động mảng số Fibonacci
void dpFibo()
{
    fibo[0] = 0;
    fibo[1] = fibo[2] = 1;
    for (int i = 3; i < 93; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

//mảng số nguyên tố
void primeArray()
{
    int count = 0;
    for (int i = 2; i < MAX; ++i)
        if (prime[i])
            val[count++] = i;
}

//comperator tăng
int cmpIncrease(const void *a, const void *b)
{
    int u = *(int *)a;
    int v = *(int *)b;
    return u - v;
}

//comperator giảm
int cmpDecrease(const void *a, const void *b)
{
    int u = *(int *)a;
    int v = *(int *)b;
    return v - u;
}

//hoán giá trị 2 con tro
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//trả về giá trị lớn, nhỏ hơn
int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

//phần tử lớn, nhỏ nhất của mảng
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

//viết thường, HOA cả xâu
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

//ma trận chuyển vị
void transporeMatrix(int *arr[size][size], int *arr_t[size][size], int n, int m)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			arr_t[i][j] = arr[j][i];
}

//nhân ma trận
void matrixProduct(int *arr1[size][size], int *arr2[size][size], int *arr1x2[size][size], int m, int n, int p)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
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

int main()
{
    return 0;
}