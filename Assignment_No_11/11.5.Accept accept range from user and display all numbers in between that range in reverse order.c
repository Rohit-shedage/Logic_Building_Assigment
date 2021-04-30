/*
5.Write a program which accept accept range from user and display all numbers in between that range in reverse order.
*/

#include<stdio.h>
#include<conio.h>
 void RangeDisplayRev(int iStart,int iEnd)
 {
         if(iStart > iEnd || iEnd < 0)
         {
                printf("\n Invalid Input......!!!");
                return;
         }

         if(iStart < 0)
        {
               while(iEnd <= iStart)
               {
                    printf(" ");
                     printf(" %d",iEnd);
                     iEnd++;
               }
        }

         while(iEnd >= iStart)
         {
                printf(" ");
                printf(" %d",iEnd);
                iEnd--;
         }
         return;
 }
int main()
{
        int iValue1 = 0, iValue2 = 0;
        printf(" Enter Starting point =>");
        scanf("%d",&iValue1);

        printf(" Enter Ending point =>");
        scanf("%d",&iValue2);

        RangeDisplayRev(iValue1, iValue2);
       return 0;
}

