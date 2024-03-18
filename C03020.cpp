#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

bool solve(int n)
{
    int reserve = 0, sum = 0, temp = n, check = 0;
    while (n)
    {
        if (n % 10 == 6)
            check = 1;
        reserve = reserve * 10 + n % 10;
        sum += n%10;
        n /= 10;
    }
    if (reserve == temp && check == 1 && sum % 10 == 8)
        return true;
    else
    	return false;
}

int main()
{
    int a = 0, b = 0;
		scanf("%d%d", &a, &b);
	if(a > b)
		swap(&a, &b);
	for(int i = a; i <= b; i++)
    {
        if(solve(i))
    		printf("%d ", i);
    }
    return 0;
}
