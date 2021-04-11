#include<stdio.h>
#include<conio.h>
int  OddFactorial(int iNo)
{
       int iRet = 1,Fact = 0;
       if(iNo < 0)
       {
              iNo = -iNo;
       }
        for(Fact = 1;iNo > 0;iNo--)
       {
           Fact = Fact * iNo;
           if(iNo%2 != 0)
           {
                 iRet = iRet * iNo;
           }
       }
       return iRet;
}
int main()
{
      int iValue = 0,iRet  = 0;

      printf("\n Enter a Number =>");
      scanf("%d",&iValue);

      iRet =  OddFactorial(iValue);

      printf("\n Odd Factorial of number is  => %d.",iRet);

      getch();
      return 0;
}
