/*
3.Write a program which accept number from user and return the count of digits in between 3 and 7.
*/

#include<stdio.h>
#include<conio.h>
int   CountRange(int iNo)
{
      int Dig = 0,iCnt = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      while( iNo > 0)
      {
            Dig = iNo%10;
            if(Dig > 3 && Dig < 7)
            {
                  iCnt++;
            }
            iNo /= 10;
      }
      return iCnt;
}
int main()
{
       int iNo = 0,iRet = 0;

       printf("Enter number to find  Count in Between 3 and 7 That Number =>");
       scanf("%d",&iNo);

       iRet =  CountRange(iNo);
       printf("\n\n --------------------------------------------------------------- \n");

       printf("\n Count Between 3 and 7 are => %d.",iRet);

       printf("\n\n --------------------------------------------------------------- \n");

       return 0;
}
