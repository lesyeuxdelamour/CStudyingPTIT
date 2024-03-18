#include <stdio.h>
#include <math.h>
#include <string.h>

void roll(char wrd[])
{
	char tmp = wrd[0];
	int len = strlen(wrd);
	for(int i = 0; i < len - 1; ++i)
		wrd[i] = wrd[i + 1];
	wrd[len - 1] = tmp;													
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int n;
	scanf("%d", &n);
	char wrd[n][51];
	for(int i = 0; i < n; ++i)
		scanf("%s", wrd[i]);
	int cnt[n];
	int flag = 1;
	for(int i = 0; i < n; ++i)
	{
		cnt[i] = 0;
		char tmp[51];
		strcpy(tmp, wrd[i]);
		while(strcmp(wrd[i], wrd[0]) != 0)
		{
			roll(wrd[i]);
			if(strcmp(wrd[i], tmp) == 0)
			{
				flag = 0;
				break;
			}
			cnt[i]++;
		}
		if(!flag)
			break;
	}
	if(flag)
	{
		int ans = 255;
		int len = strlen(wrd[0]);
		for(int i = 0; i < len; ++i)
		{
			int step = 0;
			for(int j = 0; j < n; ++j)
			{
				if(cnt[j] < len) step += cnt[j];
				else step += cnt[j] - len;
				cnt[j]++;
			}
			ans = min(step, ans);
		}
		printf("%d", ans);
	}
	else
		printf("-1");
	return 0;
}

/*
4 xzzwo zwoxz zzwox xzzwo
*/