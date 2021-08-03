//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 2. Accept N numbers from user and return difference between frequency of even number and odd numbers.*/
///    Input :  N :   7
///  Elements : 85 66 3 80 93 88 90
/// Output : 1 (4 -3)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int  Frequency(int Arr[], int iLength)
{
          int i = 0,ECnt = 0,OCnt = 0;

          for(i = 0;i < iLength;i++)
          {
                   if(Arr[i]%2 == 0)
                   {
                           ECnt++;
                   }
                   else
                   {
                           OCnt++;
                   }
          }

          return ECnt - OCnt;
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

                printf("\n\n ============difference between frequency of even  and odd number in Array============= \n");

                iRet =  Frequency(p, iSize);

               printf("\n Result is => %d.",iRet);

                printf("\n\n ======================================================================== \n");


               free(p);

              return 0;
}


