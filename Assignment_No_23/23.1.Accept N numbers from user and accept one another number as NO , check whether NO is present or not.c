//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 1. Accept N numbers from user and accept one another number as NO , check whether NO is present or not.*/
///  Input :  N :   6
///  NO:  66
/// Elements : 85 66 3 66 93 88
/// Output : TRUE
///////////////////////////////////////////////////////////////
///  Input :  N :   6
///  NO:  12
///  Elements : 85 11 3 15 11 111
///  Output : FALSE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength,int iNo)
{
          int i = 0,Srch = iNo;

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
              int iSize = 0,iCnt = 0,iNo = 0;
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

                printf("\n\n ==================Numbers Contains  in Array or ============================== \n");

                printf("\n Enter Number to Check Weather it is in Array or Not =>");
                scanf("%d",&iNo);

                bRet =  Check(p, iSize,iNo);

               if(bRet == TRUE)
              {
                      printf("\n Given Number %d is Present in the Array",iNo);
              }

              else
              {
                     printf("\n Given Number %d is Absent in the Array",iNo);
              }

            printf("\n\n ======================================================================== \n");


               free(p);

              return 0;
}


