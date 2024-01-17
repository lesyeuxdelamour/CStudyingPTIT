#include <stdio.h>
#include <string.h>

int main()
{
//	FILE *f;
//	f = fopen("D:/input.txt", "r");
	char str[101], max[101];
	while(scanf("%s", str) != -1)
		if(strlen(str) > strlen(max))
			strcpy(max, str);
	printf("%s - %d", max, strlen(max));
//	fclose(f);
	return 0;
}