/*
5. Write a program which accept area in square feet and convert it into square meter.
 (1 square feet = 0.0929 Square meter)

*/
#include<stdio.h>
#include<conio.h>
double SquareMeter(int iNo)
{
      return iNo*0.0929;
}

int main()
{
         int iValue = 0;
         double dRet = 0.0;
       printf("“Enter area in square feet =>");
        scanf("%d",&iValue);

        dRet = SquareMeter(iValue);
        printf("\n Given  Square Feet is %d converting it into Square meter is=> %0.4lf.",iValue,dRet);

        getch();
        return 0;
}
