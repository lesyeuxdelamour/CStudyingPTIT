#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct donthuc
{
	int coso, somu;
} donthuc;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("\n");
		char s1[10001], s2[10001];
		fgets(s1, 10001, stdin);
		fgets(s2, 10001, stdin);
		donthuc f1[10001], f2[10001], f12[10001];
		int cnt1 = 0, cnt2 = 0, cnt3 = 0;
		char *token1 = strtok(s1, "*x^");
		while(token1 != NULL)
		{
			f1[cnt1].coso = atoi(token1);
			token1 = strtok(NULL, " \n");
			if(token1 == NULL)
				break;
			f1[cnt1].somu = atoi(token1);
			token1 = strtok(NULL, "*x^");
			cnt1++;
		}
		char *token2 = strtok(s2, "*x^");
		while(token2 != NULL)
		{
			f1[cnt2].coso = atoi(token2);
			token2 = strtok(NULL, " \n");
			if(token2 == NULL)
				break;
			f1[cnt2].somu = atoi(token2);
			token2 = strtok(NULL, "*x^");
			cnt2++;
		}
		for(int i = 0; i < cnt1; ++i)
			for(int j = 0; j < cnt2; ++j)
				if(f1[i].somu = f2[j].somu)
				{
					f12[cnt3].somu = f1[i].somu;
					f12[cnt3].coso = f1[i].coso + f2[i].coso;
					cnt3++;
				}
		for(int i = 0; i < cnt3; ++i)
		{
			printf("%d*x^%d", f12[i].coso, f12[i].somu);
			if(i != cnt3 - 1)
				printf(" + ");
		}
	}
	return 0;
}