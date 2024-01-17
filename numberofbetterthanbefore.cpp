#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int arr[n];
		int tmp = 0, cnt = 0;
		for(int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i]);
			int flag = 1;
			for(int j = tmp; j < i; ++j)
			{
				if(arr[i] < arr[j])
				{
					flag = 0;
					break;
				}
			}
			if(flag)
			{
				tmp = i;
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}