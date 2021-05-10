/*
2.Write a program which accept number from user and return the count of Odd digits
*/

#include<stdio.h>
#include<conio.h>
int  CountOdd(int iNo)
{
      int Dig = 0,iCnt = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      while( iNo > 0)
      {
            Dig = iNo%10;
            if(Dig%2 != 0)
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

       printf("Enter number to find Odd Count in That Number =>");
       scanf("%d",&iValue);

       iRet = CountOdd(iValue);
       printf("\n\n --------------------------------------------------------------- \n");

       printf("\n Odd Count are => %d.",iRet);

       printf("\n\n --------------------------------------------------------------- \n");

       return 0;
}
