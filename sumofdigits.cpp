#include<stdio.h>

int main(){
	int t;
		scanf("%d", &t);
	while(t--){
		int n;
			scanf("%d", &n);
		int sum = 0;
		do
		{
			sum += n % 10;
			n /= 10;
		}
		while(n != 0);
		printf("%d\n", sum);
	}
	return 0;
}