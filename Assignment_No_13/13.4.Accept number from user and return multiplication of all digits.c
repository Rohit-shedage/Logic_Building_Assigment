/*
4.Write a program which accept number from user and return multiplication of all digits.
*/

#include<stdio.h>
#include<conio.h>
int   MultDigits(int iNo)
{
      int Dig = 0,iSum = 1;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      while( iNo > 0)
      {
            Dig = iNo%10;
            if(Dig != 0)
            {
                 iSum = iSum * Dig;
            }
            iNo /= 10;
      }
      return iSum;
}
int main()
{
       int iValue = 0,iRet = 0;

       printf("Enter number to find  Multiplication of That Number =>");
       scanf("%d",&iValue);

       iRet =  MultDigits(iValue);
       printf("\n\n --------------------------------------------------------------- \n");

       printf("\n Multiplication of Number %d is => %d.",iValue,iRet);

       printf("\n\n --------------------------------------------------------------- \n");

       return 0;
}
