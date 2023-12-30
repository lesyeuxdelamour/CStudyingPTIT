#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int cmp(const void *a, const void *b)
{
    ll u = *(ll *)a;
    ll v = *(ll *)b;
    if(u > v) return 1;
    if(u < v) return -1;
    return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		ll arr[n];
		for(int i = 0; i < n; ++i)
		{
			ll val;
			scanf("%lld", &val);
			arr[i] = val * val;
		}
 		qsort(arr, n, sizeof(ll), cmp);
		int flag = 0;
		for(int i = n - 1; i > 1; --i)
		{
			int l = 0, r = i - 1;
			while(l < r)
			{
				if(arr[l] + arr[r] == arr[i])
				{
					flag = 1;
					break;
				}
				if(arr[l] + arr[r] > arr[i])
					r--;
				if(arr[l] + arr[r] < arr[i])
					l++;
			}
			if(flag)
				break;
		}
		printf((flag) ? "YES\n" : "NO\n");
	}
	return 0;
}