#include<stdio.h>
#include<math.h>

int main(){
	int t;
		scanf("%d", &t);
	while(t--)
	{
		int a;
			scanf("%u", &a);
		int b = sqrt(a);
		if(b*b== a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;	
}
