#include<stdio.h>

int main(){
	int x;
		scanf("%d", &x);
	for(int i = 1; i <= x; i++){
		long long a; 
			scanf("%u", &a);
			printf("%llu\n", a*a);
	}
	return 0;
}
