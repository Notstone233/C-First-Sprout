#include<stdio.h>
#include<math.h>
int main()
{   
	double a,b,c,d,e,f;
	double gen1(double x,double y,double z);
	double gen2(double x,double y,double z);
    double gen3(double x,double y,double z);
	printf("Please enter a,b,c\n");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	d=gen1(a,b,c);
	e=gen2(a,b,c);
	f=gen3(a,b,c);
        if(d<0)
			printf("没有根\n");
		else
		{
			if(d>0)
			printf("根为%f和%f\n",e,f);
			else
		    printf("根为%f\n",e);
		}
    return 0;
}

double gen1(double x,double y,double z)
{
   double o;
   o=y*y-4*x*z;
   return(o);
}

double gen2(double x,double y,double z)
{
   double p;
   p=-y/(2*x)+sqrt(y*y-4*x*z)/(2*x);
   return(p);
}

double gen3(double x,double y,double z)
{
   double u;
   u=-y/(2*x)-sqrt(y*y-4*x*z)/(2*x);
   return(u);
}