#include<stdio.h>
int main()
{
	int x,y,a,b,c,d;
	printf("������ �ַ������У�����\n");
	scanf("%c,%d,%d",&a,&y,&x);
	for(d=1;d<=y;d++)
	{
		for(c=1;c<=x;c++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}