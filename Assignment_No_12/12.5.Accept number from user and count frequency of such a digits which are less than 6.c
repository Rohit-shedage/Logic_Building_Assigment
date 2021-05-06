/*
5.Write a program which accept number from user and count frequency of such a digits which are less than 6.
*/
#include<stdio.h>
#include<conio.h>

int Count(int iNo)
{
           int dCnt = 0,Dig = 0;

           while(iNo > 0)
           {
                     Dig = iNo % 10;
                     if(Dig < 6)
                     {
                             dCnt++;
                     }
                     iNo /= 10;
           }
           return dCnt;
}
int main()
{
        int iValue = 0;
        int iRet = 0;

         printf("\n Enter number it will Count of \" Less Than 6 \" is =>");
         scanf("%d",&iValue);

         printf("\n --------------------------------------------------------------------- \n");

         iRet = Count(iValue);
        printf("\n Given Number %d Less Than 6 is => %d.",iValue,iRet);
         printf("\n --------------------------------------------------------------------- \n");

      return 0;
 }
