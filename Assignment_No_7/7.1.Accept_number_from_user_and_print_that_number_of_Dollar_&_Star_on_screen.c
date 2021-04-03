#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
      int i = 0,j = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

     for(i = 1;i <= iNo;i++)
     {
          printf(" $");
          printf(" *");
     }
      return;
}
int main()
{
       int iValue = 0;

       printf("\n Enter the Value to print Odd Count \"$\" and Even Count \"*\" =>");
       scanf("%d",&iValue);

       Pattern(iValue);

       getch();
       return 0;
}
