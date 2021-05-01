/*
2.Write a program which accept number from user and check whether it contains 0 in it or not.
*/
#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
           int Dig = 0;

           while(iNo > 0)
           {
                     Dig = iNo % 10;
                     if(Dig == 0)
                     {
                            return TRUE;
                     }
                     iNo /= 10;
           }
           return 0;
}
int main()
{
        int iValue = 0;
        BOOL bRet = FALSE;

         printf("\n Enter number it will Count \" 0 Digit \" only =>");
         scanf("%d",&iValue);

         printf("\n --------------------------------------------------------------------- \n");

         bRet = ChkZero(iValue);
         if(bRet == TRUE)
         {
               printf("\n It Contains Zero");
         }
         else
         {
               printf("\n There is no Zero");
         }
         printf("\n --------------------------------------------------------------------- \n");

      return 0;
 }
