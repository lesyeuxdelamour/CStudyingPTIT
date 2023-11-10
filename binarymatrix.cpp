#include<stdio.h> 

int arr[3];

int main()
{
	int n, zeros, ones, count = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		ones = 0, zeros = 0;
		for(int j = 0; j < 3; ++j)
		{
			scanf("%d", &arr[j]);
			if(arr[j])
				ones++;
			else
				zeros++;
		}
		if(ones > zeros)
			count++;
	}	
	printf("%d", count);
	return 0;
}
