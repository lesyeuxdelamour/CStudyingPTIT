#include<stdio.h>

int main(){
	int a, b;
		scanf("%u %u", &a, &b);
	if (b == 0){
		printf("0");
	}
	else{
		printf("%d %d %d %.2f %d", a+b, a-b, a*b, (float)a/b, a%b);
	}
	return 0;
}
