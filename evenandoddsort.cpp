#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int u = *(int *)a;
    int v = *(int *)b;
    return u - v;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    int x, b[n], c[n], nb = 0, nc = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            b[nb++] = x;
        else
            c[nc++] = x;
    }
    qsort(b, nb, sizeof(int), cmp);
    qsort(c, nc, sizeof(int), cmp);
    print(b, nb);
    print(c, nc);
    return 0;
}