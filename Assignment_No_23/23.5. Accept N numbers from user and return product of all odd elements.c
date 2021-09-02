//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 5. Accept N numbers from user and return product of all odd elements. */
///  Input :  N :   6
///  Elements : 15 66 3 70 10 88
/// Output : 45
///////////////////////////////////////////////////////////////
///  Input :  N :   6
///  Elements : 44 66 72 70 10 88
/// Output : 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

int  Product(int Arr[], int iLength)
{
          int i = 0,iSum = 1;

          for(i = 0;i < iLength;i++)
          {
                 if(Arr[i]%2 != 0 )
                 {
                       iSum *= Arr[i];
                 }
          }
          return iSum;
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

              printf("\n\n ==================Product of Odd Number in Array============================== \n");



             iRet =   Product(p, iSize);

             printf("\n Product of Odd Number in Array is => %d.",iRet);

             printf("\n\n ======================================================================== \n");

               free(p);

              return 0;
}


