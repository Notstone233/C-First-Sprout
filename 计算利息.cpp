#include <stdio.h>
int main()
{
  double a=1000,a1=0.003,a2=0.02,a3=0.015,A,B,C;
  A=a*(1+a1);
  B=a*(1+a2);
  C=a*(1+a3/2)*(1+a3/2);
  printf("A=%f\n B=%f\n C=%f\n",A,B,C);
  return 0;
}