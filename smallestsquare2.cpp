#include<stdio.h>
#define size 4

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}

int main()
{
    int a[size][2];
    int min_x = 100, max_x = -100;
    int min_y = 100, max_y = -100;
    for(int i = 0; i < size; i++)
    {
        scanf("%d%d", &a[i][0], &a[i][1]);
        min_x = min(min_x, a[i][0]);
        max_x = max(max_x, a[i][0]);
        min_y = min(min_y, a[i][1]);
        max_y = max(max_y, a[i][1]);
    }
    int edge = max(max_x - min_x, max_y - min_y);
    printf("%d", edge*edge);
    return 0;
}
