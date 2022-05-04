#include <stdio.h>
 int main()
 {
	 int Square(int);
	 int Cude(int);
	 int i;
	 int a;
	 scanf("%d",&a);
	 i=Square(a);
	 printf("The Square is %d\n",i);
     i=Cude(a);
	 printf("The Cude is %d\n",i);
	 return 0;
 }

  int Square(int a)
  {
	  int resulf;
	  resulf=a*a;
	  return resulf;
  }

  int Cude(int a)
  {
	  int resulf;
	  resulf=a*a*a;
	  return resulf;
  }

