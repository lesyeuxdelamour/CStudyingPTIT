#include<stdio.h>
#include<string.h>

void solve()
{
	char str[100], letter[100];
	int time[100] = {0}, count = 0, i = 0;
		scanf("%s", str);
	letter[count] = str[i];
	while(i < strlen(str))
	{
		while(str[i] == str[i+1])
		{
			time[count]++;
			i++;
		}
		i++;
		count++;
		letter[count] = str[i];
	}
	for(int j = 0; j < count; j++)
		printf("%c%d", letter[j], time[j]+1);
	printf("\n");
}

int main()
{
	int t;
		scanf("%d\n", &t);
	while(t--)
		solve();
	return 0;
}
