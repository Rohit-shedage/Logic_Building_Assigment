/*
5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
*/

#include<stdio.h>
#include<conio.h>
int    CountDiff(int iNo)
{
      int Dig = 0,iSum = 0,iSum2 = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      while( iNo > 0)
      {
            Dig = iNo%10;
            if(Dig%2 != 0)
            {
                 iSum = iSum + Dig;
            }
            else
            {
                 iSum2 = iSum2 +Dig;
            }
            iNo /= 10;
      }
      return iSum2 - iSum;
}
int main()
{
       int iValue = 0,iRet = 0;

       printf("Enter number to find Difference Between Even and Odd Count of That Number =>");
       scanf("%d",&iValue);

       iRet =   CountDiff(iValue);
       printf("\n\n ------------------------------------------------------------------------------------------------------- \n");

       printf("\n Difference Between Even and Odd Count of Given Number %d is => %d.",iValue,iRet);

       printf("\n\n ------------------------------------------------------------------------------------------------------ \n");

       return 0;
}
