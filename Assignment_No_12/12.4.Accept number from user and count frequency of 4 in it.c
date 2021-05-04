/*
4.Write a program which accept number from user and count frequency of 4 in it.
*/
#include<stdio.h>
#include<conio.h>

int CountFour(int iNo)
{
           int dCnt = 0,Dig = 0;

           while(iNo > 0)
           {
                     Dig = iNo % 10;
                     if(Dig == 4)
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

         printf("\n Enter number it will Count of \" Frequency of 4 \" is =>");
         scanf("%d",&iValue);

         printf("\n --------------------------------------------------------------------- \n");

         iRet = CountFour(iValue);
        printf("\n Given Number %d Frequency of 4 is => %d.",iValue,iRet);
         printf("\n --------------------------------------------------------------------- \n");

      return 0;
 }
