//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 1. Accept N numbers from user and return the largest number. */
///  Input :  N :   6
///  Elements : 85 66 3 66 93 88
///  Output : 93
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Maximum(int Arr[], int iLength)
{
          int i = 0,Max = 0;

          for(i = 0;i < iLength;i++)
          {
                if(Arr[i] == 0)
                {
                       Max = Arr[i];
                }
                if(Max < Arr[i])
                {
                       Max = Arr[i];
                }
          }

          return Max;
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

              printf("\n\n =====================Maximum  Number in Array============================== \n");

             iRet =  Maximum(p, iSize);

              printf("\n Largest Element In Given Array is => %d.",iRet);


             printf("\n\n ======================================================================== \n");


            free(p);

            return 0;
}


