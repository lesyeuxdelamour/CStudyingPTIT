#include<stdio.h>
#define max 25

int prime(int n)
{
	for(int i = 2; i*i <= n; i++)
		if(n%i == 0)
			return 0;
	return n > 1;
}

void primes(int primeArray[])
{
	int count = 0;
	for(int i = 2; i < 2500; i++)
	{
		if(prime(i))
		{
			primeArray[count] = i;
			count++;
		}
	}
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	for(int s = 0; s < t; s++)
	{
		int n = 0, count = 0, k = 0, primeArray[361], arr[max][max];
			scanf("%d", &n);
		primes(primeArray);
		printf("Test %d:\n", s+1);
		int canh = n;
		while(k <= n/2)
		{
			for(int i = k; i < canh; i++)
			{
				arr[k][i] = primeArray[count];
				count++;
			}
			for(int i = k+1; i < canh; i++)
			{
				arr[i][canh-1] = primeArray[count];
				count++;
			}
			for(int i = canh-2; i >= k; i--)
			{
				arr[canh-1][i] = primeArray[count];
				count++;
			}
			for(int i = canh-2; i > k; i--)
			{
				arr[i][k] = primeArray[count];
				count++;
			}
			canh--; k++;
		}
		for(int a = 0; a < n; a++)
		{
			for (int b = 0; b < n; b++)
				printf("%4d ", arr[a][b]);
			printf("\n");
		}
	}
	return 0;	
}

