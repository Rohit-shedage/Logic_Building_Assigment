#include<stdio.h>
#include<conio.h>
void Rev_Table(int iNo)
{
       int i = 0;
       if(iNo < 0)
       {
              iNo = -iNo;
       }
       for(i = 10;i > 0;i--)
       {
               printf(" %d",i*iNo);
       }
       return;
}
int main()
{
      int iValue = 0,iRet = 0;

      printf("\n Enter a Number Display Reverse Table of That Number =>");
      scanf("%d",&iValue);

      Rev_Table(iValue);

      getch();
      return 0;
}
