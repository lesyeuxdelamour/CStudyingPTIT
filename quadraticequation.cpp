#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c;
		scanf("%f %f %f", &a, &b, &c);
	float k = b*b-4*a*c;
	double h = sqrt(k);
	if(k > 0) && (a > 0){
		printf("%.2lf %.2lf", (-b+h)/(2*a), (-b-h)/(2*a));
	}
	else{
		printf("%.2lf %.2lf", (-b-h)/(2*a), (-b+h)/(2*a));
	}
	else if(k < 0){
			printf("NO");
		}
		else{
			printf("%.2lf", -b/(2*a));
		}
	return 0;
}
