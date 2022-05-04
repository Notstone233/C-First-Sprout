#include<stdio.h>
int main()
{
   char a;
   printf("Please enter your level\n");
   scanf("%c",&a);
   printf("Your mark:");
   switch(a)
   {
   case'A':printf("85-100\n");break;
   case'B':printf("70-85\n");break;
   case'C':printf("60-70\n");break;
   case'D':printf("<60\n");break;
   default:printf("enter data error!\n");   //
   }


	return 0;
}