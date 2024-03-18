#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int l = ceil(sqrt(a));
	int r = floor(sqrt(b));
	printf("%d\n", r - l + 1);
	for (int i = l; i <= r; i++)
		printf("%d\n", i*i);
	return 0;
}
