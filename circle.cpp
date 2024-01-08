#include <stdio.h>
#include <string.h>

typedef struct alpha
{
	int start, end;
} alpha;

int main()
{
	char str[52];
	scanf("%s", str);
	alpha arr[26];
	for(int i = 0; i < 26; ++i)
		arr[i].start = arr[i].end = -1;
	for(int i = 0; i < 52; ++i)
	{
		int x = str[i] - 'A';
		if(arr[x].start == -1)
			arr[x].start = i;
		else
			arr[x].end = i;
	}
	int ans = 0;
	for(int i = 0; i < 26; ++i)
		for(int j = 0; j < 26; ++j)
			if(arr[i].start < arr[j].start && arr[j].start < arr[i].end && arr[i].end < arr[j].end)
				ans++;
	printf("%d", ans);
	return 0;
}