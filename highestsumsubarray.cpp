#include <stdio.h>

typedef long long ll;

ll arr[100001];

ll max(ll a, ll b)
{
	return a > b ? a : b;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%lld", &arr[i]);
		//Kadane's Algorithm
		ll result = -1e18, sum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum = max(arr[i], sum + arr[i]);
			result = max(result, sum);
		}
		printf("%lld\n", result);
	}
}