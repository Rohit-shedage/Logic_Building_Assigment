/*
3.Write a program which accept number from user and count frequency of 2 in it.
*/
#include<stdio.h>
#include<conio.h>

int CountTwo(int iNo)
{
           int dCnt = 0,Dig = 0;

           while(iNo > 0)
           {
                     Dig = iNo % 10;
                     if(Dig == 2)
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

         printf("\n Enter number it will Count of \" 2 Digit \" occurence only =>");
         scanf("%d",&iValue);

         printf("\n --------------------------------------------------------------------- \n");

         iRet = CountTwo(iValue);
        printf("\n Given Number %d Frequency of 2 is => %d.",iValue,iRet);
         printf("\n --------------------------------------------------------------------- \n");

      return 0;
 }
