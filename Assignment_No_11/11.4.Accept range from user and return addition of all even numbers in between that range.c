/*
4.Write a program which accept range from user and return addition of all even numbers in between that range.
 (Range should contains positive numbers only) */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int RangeSumEven(int iStart,int iEnd)
 {
         int iSum = 0;
         if(iStart > iEnd || iStart < 0)
         {
                printf("\n Invalid Input......!!! \n");
                exit(0);
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
                      iSum = iSum + iStart;
                }
                iStart++;
         }
         return iSum;
 }
int main()
{
        int iValue1 = 0, iValue2 = 0,iRet = 0;
        printf(" Enter Starting point =>");
        scanf("%d",&iValue1);

        printf(" Enter Ending point =>");
        scanf("%d",&iValue2);

        iRet = RangeSumEven(iValue1, iValue2);
       printf("\n Addition of Even Range is => %d.\n",iRet);
       return 0;
}

