#include<stdio.h>
#define max 1000

void leading()
{
	int n = 0, arr[max], check = 0;
		scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for(int j = 0; j < n-1; j++)
	{
		for(int k = j+1; k < n; k++)
			if(arr[j] <= arr[k])
				check = 1;
		if(check == 0)
			printf("%d ", arr[j]);
		else
			check = 0;
	}
	printf("%d", arr[n-1]);
	printf("\n");
}

int main()
{
	int t = 0;
		scanf("%d", &t);
	while(t--)
		leading();
	return 0;
}
