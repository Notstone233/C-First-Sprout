#include<stdio.h>
int main()
{
	double b,c,d;
	int i;
	for(i=1,b=0;i<=100;i++)
	{
		printf("please enter the amount:");
		scanf("%lf",&c);
		b=b+c;
		if(b>=1000)break;
	}
	d=b/i;
	printf("num=%d\n aver=%lf",i,d);
	return 0;
}
