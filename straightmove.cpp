#include <stdio.h>

int main()
{
	int a, b;
	while(scanf("%d%d", &a, &b) != -1)
	{
		if(a > b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
		int cnt = 0, step = 1;
		while(b - a > step)
		{
			a += step;
			cnt++;
			if(b - a <= step)
				break;
			b -= step;
			step++;
			cnt++;
		}
		if(a == b)
			printf("%d\n", cnt);
		else
			printf("%d\n", cnt+1);
	}
	return 0;
}