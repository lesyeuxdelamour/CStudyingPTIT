#include <stdio.h>
#include <math.h>

double peri(double x1, double y1, double x2, double y2, double x3, double y3)
{
	
	double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if(a == 0 || b == 0 || c == 0)
		return -1;
	if(a + b <= c || b + c <= a || c + a <= b)
		return -1;
	return a + b + c;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		if(peri(x1, y1, x2, y2, x3, y3) == -1)
			printf("INVALID\n");
		else
			printf("%.3lf\n", peri(x1, y1, x2, y2, x3, y3));
	}
	return 0;
}