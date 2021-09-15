//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 3. Accept N numbers from user and return the difference between largest and smallest number.*/
///  Input :  N :   6
///  Elements : 85 66 3 66 93 88
/// Output : 90 (93 -3)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL   Difference(int Arr[], int iLength)
{
          int i = 0,Min = 0,Max = 0;

          for(i = 0;i < iLength;i++)
          {
                if(i == 0)
                {
                       Min = Arr[i];
                       Max = Arr[i];
                      // continue;
                }
                if(Min > Arr[i])
                {
                       Min = Arr[i];
                }
                else
                {
                       if(Max < Arr[i])
                       {
                               Max = Arr[i];
                       }
                }
          }

          return Max - Min;
}

int main()
 {
              int iSize = 0,iCnt = 0;
              int *p = NULL;
              int iRet = 0;

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

              printf("\n\n =====================Difference Between Max & Min  Element in Array============================== \n");

             iRet =    Difference(p, iSize);

              printf("\n Difference Between Maximum & Minimum Element In Given Array is => %d.",iRet);


             printf("\n\n ======================================================================== \n");


            free(p);

            return 0;
}


