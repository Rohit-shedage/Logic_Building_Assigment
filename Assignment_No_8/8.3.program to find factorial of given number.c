#include<stdio.h>
#include<conio.h>
int Factorial(int iNo)
{
       int Fact = 0;
       if(iNo < 0)
       {
              iNo = -iNo;
       }
       for(Fact = 1;iNo > 0;iNo--)
       {
           Fact = Fact * iNo;
       }
       return Fact;
}
int main()
{
      int iValue = 0,iRet = 0;

      printf("\n Enter a Single digit number print it word =>");
      scanf("%d",&iValue);

      iRet = Factorial(iValue);

      printf("\n Given Number %d Factorial is => %d.",iValue,iRet);
      getch();
      return 0;
}
