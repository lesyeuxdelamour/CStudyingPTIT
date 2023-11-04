#include<stdio.h>
#include<math.h>

int main()
{
	long long a, b; int count = 0;
		scanf("%lld%lld", &a, &b);
	if(a > b)
		return 0;	
	int m = sqrt(a), n = sqrt (b);
	{
		for(int j = sqrt(a); j <= sqrt(b); j++)
		{
			if(j*j < a)
				continue;
			count++;
		}
	}
	printf("%d\n", count);
	for(int i = sqrt(a); i <= sqrt(b); i++)
	{
		if(i*i < a)
			continue;
		printf("%d\n", i*i);
	}
	return 0;
}
