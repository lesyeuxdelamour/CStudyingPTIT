#include<stdio.h>
#define max 99999

void solve(int k)
{
	int n = 0;
		scanf("%d", &n);
	int arr[max], count[max] = {0};
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		count[arr[i]]++;
	}
	printf("Test %d:\n", k);
	for(int i = 0; i < n; i++)
	{
		if(count[arr[i]] > 0)
		{
			printf("%d appears %d time", arr[i], count[arr[i]]);
			if(count[arr[i]] != 1)
				printf("s\n");
			else
				printf("\n");
			count[arr[i]] = 0;
		}
	}
}

int main()
{
	int t = 0, k = 0;
		scanf("%d", &t);
	while(k != t)
	{
		k++;
		solve(k);
	}
	return 0;
}
