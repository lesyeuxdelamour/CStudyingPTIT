#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int check(int arr[], int n)
{
    for(int i = 0; i < n*2 - 2; ++i)
    {
        int fre = 1;
        while(arr[i] == arr[i + 1])
        {
            i++;
            fre++;
            if(fre == n - 1)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n*2];
    for(int i = 0; i < n*2 - 2; ++i)
        scanf("%d", &arr[i]);
    qsort(arr, n*2 - 2, sizeof(int), cmp);
    printf((check(arr, n)) ? "Yes" : "No");
    return 0;
}