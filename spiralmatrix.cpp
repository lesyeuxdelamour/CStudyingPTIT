#include<stdio.h>
#define max 100

int main()
{
	int n = 0, t = 1, k = 0, i, arr[max][max];
		scanf("%d", &n);
	int canh = n;
	while(k <= n/2)
	{
		for(i = k; i < canh; i++)
			arr[k][i] = t++;
		for(i = k+1; i < canh; i++)
			arr[i][canh-1] = t++;
		for(i = canh-2; i >= k; i--)
			arr[canh-1][i] = t++;
		for(i = canh-2; i > k; i--)
			arr[i][k] = t++;
		canh--; k++;
	}
	for(int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
			printf("%2d ", arr[a][b]);
		printf("\n");
	}
	return 0;	
}
