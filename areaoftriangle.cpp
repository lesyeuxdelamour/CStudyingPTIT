#include <stdio.h>
#include <math.h>

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double a = x1 - x2;
	double b = y1 - y2;
	double c = x2 - x3;
	double d = y2 - y3;
	double e = x1 - x3;
	double f = y1 - y3;
	if(a*d == b*c)
		return -1;	
	double aa = sqrt(a*a + b*b);
	double bb = sqrt(c*c + d*d);
	double cc = sqrt(e*e + f*f);
	return sqrt((aa + bb + cc)*(aa + bb - cc)*(bb + cc - aa)*(cc + aa - bb))/4;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		if(area(x1, y1, x2, y2, x3, y3) == -1)
			printf("INVALID\n");
		else
			printf("%.2lf\n", area(x1, y1, x2, y2, x3, y3));
	}
	return 0;
}