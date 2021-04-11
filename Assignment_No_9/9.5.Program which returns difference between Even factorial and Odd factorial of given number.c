#include<stdio.h>
#include<conio.h>
int  FactorialDiff(int iNo)
{
       int iRet = 1,Fact = 0,iRet2 = 1;
       if(iNo < 0)
       {
              iNo = -iNo;
       }
        for(Fact = 1;iNo > 0;iNo--)
       {
          // Fact = Fact * iNo;
           if(iNo%2 != 0)
           {
                 iRet = iRet * iNo;
           }
           else if(iNo%2 == 0)
           {
                 iRet2 = iRet2*iNo;
           }

       }
       return iRet2-iRet;
}
int main()
{
      int iValue = 0,iRet  = 0;

      printf("\n Enter a Number =>");
      scanf("%d",&iValue);

      iRet =  FactorialDiff(iValue);

      printf("\n Factorial difference is => %d.",iRet);

      getch();
      return 0;
}
