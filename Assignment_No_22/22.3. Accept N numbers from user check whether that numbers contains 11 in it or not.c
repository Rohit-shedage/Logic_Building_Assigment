//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 3. Accept N numbers from user check whether that numbers contains 11 in it or not. */
///  Input :  N :   6
///  Elements : 85 66 11 80 93 88
///  Output : 11 is present
///////////////////////////////////////////////////////////////
///  Input :  N :   6
///   Elements : 85 66 3 80 93 88
///  Output : 11 is absent
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
          int i = 0,Srch = 11;

          for(i = 0;i < iLength;i++)
          {
                 if(Srch == Arr[i])
                 {
                         return TRUE;
                 }
          }

          return FALSE;
}

int main()
 {
              int iSize = 0,iCnt = 0;
              int *p = NULL;
              BOOL bRet = FALSE;

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

                printf("\n\n ==================Numbers Contains 11 in it or Not in Array======================= \n");

                bRet =  Check(p, iSize);

               if(bRet == TRUE)
              {
                      printf("\n 11 is Present in the Array");
              }

              else
              {
                     printf("\n 11 is Absent in the Array");
              }

            printf("\n\n ======================================================================== \n");


               free(p);

              return 0;
}


