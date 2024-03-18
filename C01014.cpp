#include<stdio.h>

int main(){
		float a, b;
			scanf("%f %f", &a, &b);
		if(a != 0){
				printf("%.2f\n", -b/a);
		}
		else if(b == 0){
				printf("Infinite solutions");
		}
		else{
				printf("No solution");
		}
	return 0;	
}
