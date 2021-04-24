/*
3. Write a program which accept range from user and return addition of all numbers in between that range.
(Range should contains positive numbers only)
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int RangeSum(int iStart,int iEnd)
 {
         int iSum = 0;
         if(iStart > iEnd || iStart < 0)
         {
                printf("\n Invalid Input......!!!");
                exit(0);
         }

         while(iStart <= iEnd)
         {
                iSum = iSum + iStart;
                iStart++;
         }
         return iSum;
 }
int main()
{
        int iValue1 = 0, iValue2 = 0,iRet = 0;
        printf("Enter Starting point =>");
        scanf("%d",&iValue1);

        printf("Enter Ending point =>");
        scanf("%d",&iValue2);

        iRet = RangeSum(iValue1, iValue2);

       printf("Addition of Range is => %d.",iRet);
       return 0;
}

