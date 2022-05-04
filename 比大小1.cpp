#include<stdio.h>
int main()
{
	double max(double x,double y);
    double a,b,c;
	scanf("%lf,%lf",&a,&b);
	c=max(a,b);
	printf("%lf\n",c);
	return 0;
}

double max(double x,double y)
{
    if(x>y)
		return x;
	else
		return y;
}

