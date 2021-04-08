#include<stdio.h>
#include<conio.h>
void Table(int iNo)
{
       int i = 0;
       if(iNo < 0)
       {
              iNo = -iNo;
       }
       for(i = 1;i <= 10;i++)
       {
               printf(" %d",i*iNo);
       }
       return;
}
int main()
{
      int iValue = 0,iRet = 0;

      printf("\n Enter a Number Display Table =>");
      scanf("%d",&iValue);

      Table(iValue);

      getch();
      return 0;
}
