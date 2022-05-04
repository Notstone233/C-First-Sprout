#include<stdio.h>
int main()
{
	double a(double x,double y);
    double d;
	double b=-2,c=3;
	d=a(b,c);
	printf("%f\n",d);
	return 0;
}

double a(double x,double y)
{
	double o;
	o=x*y;
	if(x<0)
		return 1.0;
	else
		return o;
}