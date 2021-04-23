/*
2. Write a program which accept range from user and display all even numbers in between that range.
*/

#include<stdio.h>
#include<conio.h>
 void RangeDisplayEven(int iStart,int iEnd)
 {
         if(iStart > iEnd || iEnd < 0)
         {
                printf("\n Invalid Input......!!!");
                return;
         }
         /*
         if(iStart < 0)
        {
               while(iStart <= iEnd)
               {
                     if(iStart%2 == 0)
                {
                      printf(" %d",iStart);
                }
                     iStart++;
               }
        }
        */
         while(iStart <= iEnd || iStart < 0)
         {
                if(iStart%2 == 0)
                {
                      printf(" %d",iStart);
                }
                iStart++;
         }
         return;
 }
int main()
{
        int iValue1 = 0, iValue2 = 0;
        printf("Enter Starting point =>");
        scanf("%d",&iValue1);

        printf("Enter Ending point =>");
        scanf("%d",&iValue2);

        RangeDisplayEven(iValue1, iValue2);
       return 0;
}

