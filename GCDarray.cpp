#include <stdio.h>
#include <stdlib.h>

int lcm (int a, int b)
{
    int tmp, k = a * b;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return k / a;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], b[n + 1];
		for(int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		b[0] = a[0];
		for(int i = 1; i < n; ++i)
			b[i] = lcm(a[i - 1], a[i]);
		b[n] = a[n - 1];
		for(int i = 0; i <= n; ++i)
			printf("%d ", b[i]);
		printf("\n");
	}
	return 0;
}
