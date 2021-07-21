//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 1. Accept N numbers from user and return difference between summation of even
                   elements and summation of odd elements. */
///     Input :  N :   6
///     Elements : 85 66 3 80 93 88
///     Output : 53 (234 - 181)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(int Arr[], int iLength)
{
          int i = 0,Esum = 0,Osum = 0;

          for(i = 0;i < iLength;i++)
          {
                   if(Arr[i]%2 == 0)
                   {
                           Esum = Esum + Arr[i];
                   }
                   else
                   {
                           Osum = Osum + Arr[i];
                   }
          }

          return Esum - Osum;
}

int main()
 {
              int iSize = 0,iRet = 0,iCnt = 0;
              int *p = NULL;

              printf("\n Enter number of elements =>");
              scanf("%d",&iSize);

               p = (int *)malloc(iSize * sizeof(int));

               if(p == NULL)
               {
                               printf(" \n Unable to allocate memory");
                                return -1;
                }

                printf("\n\n ==========================Displaying Array================================ \n");

                for(iCnt = 0;iCnt < iSize;iCnt++)
                {
                             printf("\n Given Element %d is => %d.",iCnt+1,p[iCnt]);
                }

                 printf("\n\n =========================Accepting Array================================== \n");

                for(iCnt = 0;iCnt<iSize; iCnt++)
                {
                               printf("\n Enter element %d => ",iCnt+1);
                               scanf("%d",&p[iCnt]);
                }

                printf("\n\n ==================Difference Between Even and Odd Array======================= \n");

                iRet = Difference(p, iSize);

               printf("\n Result is %d",iRet);

                printf("\n\n ======================================================================== \n");


               free(p);

              return 0;
}


