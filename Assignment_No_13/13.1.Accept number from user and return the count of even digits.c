/*
1.Write a program which accept number from user and return the count of even digits
*/

#include<stdio.h>
#include<conio.h>
int  CountEven(int iNo)
{
      int Dig = 0,iCnt = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      while( iNo > 0)
      {
            Dig = iNo%10;
            if(Dig%2 == 0)
            {
                  iCnt++;
            }
            iNo /= 10;
      }
      return iCnt;
}
int main()
{
       int iValue = 0,iRet = 0;

       printf("Enter number to find Even Count in That Number =>");
       scanf("%d",&iValue);

       iRet = CountEven(iValue);
       printf("\n\n --------------------------------------------------------------- \n");

       printf("\n Even Count are => %d.",iRet);

       printf("\n\n --------------------------------------------------------------- \n");

       return 0;
}
