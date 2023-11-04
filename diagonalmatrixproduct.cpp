#include<stdio.h>
#define max 20

void matrix(int matrixN[max][max], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < i+1; j++)
			matrixN[i][j] = j+1;
}

void rotate(int matrixN[max][max], int matrixN2[max][max], int n)
{
	for(int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			matrixN2[i][j] = matrixN[j][i];
}

void matrixproduct(int matrixN[max][max], int matrixN2[max][max], int matrixNxN2[max][max], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int k = 0; k < n; k++)
			{
				matrixNxN2[i][j] += matrixN[i][k] * matrixN2[k][j];
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", matrixNxN2[j][i]);
		printf("\n");
	}
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	for(int i = 1; i <= t; i++)
	{
		int n = 0;
			scanf("%d", &n);
		printf("Test %d:\n", i);
		int matrixN[max][max] = {0}, matrixN2[max][max] = {0};
		matrix(matrixN, n);
		rotate(matrixN, matrixN2, n);
		int matrixNxN2[max][max] = {0};
		matrixproduct(matrixN, matrixN2, matrixNxN2, n);
	}
	return 0;
}
