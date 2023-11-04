#include<stdio.h>
#define size 100000

long long max(long long a, long long b)
{
	if(a > b)
		return a;
	return b;
}

void input(long long arr[], int n)
{
	for(int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
}

void highestSubArray(long long arr[], int n) // Kadane’s algorithm.
{
	long long result = -1e18, sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum = max(arr[i], sum+arr[i]);
		result = max(result, sum);
	}
	printf("%lld\n", result);
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
	{
		int n = 0;
			scanf("%d", &n);
		long long arr[size];
		input(arr, n);
		highestSubArray(arr, n);
	}
	
}
