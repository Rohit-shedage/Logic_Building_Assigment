#include<stdio.h>
#include<conio.h>
int DollarToINR(int iNo)
{
       if(iNo < 0)
       {
             printf("\n Invalid Amount......!!!");
             return;
       }
       return iNo*70;
}
int main()
{
      int iValue = 0,iRet  = 0;

      printf("\n Enter a Amount in US Dollar =>");
      scanf("%d",&iValue);

      iRet = DollarToINR(iValue);

      printf("\n After Converting US Dollar Amount %d in INDIAN Currency is => %d.",iValue,iRet);

      getch();
      return 0;
}
