//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 2. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.*/
///  Input :  N :   6
///  NO:  66
/// Elements : 85 66 3 66 93 88
/// Output : “First occurrence of number is 1
///////////////////////////////////////////////////////////////
///  Input :  N :   6
///  NO:  12
///  Elements : 85 11 3 15 11 111
/// Output : There is no such number
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
          int i = 0,Srch = iNo;

          for(i = 0;i < iLength;i++)
          {
                 if(Srch == Arr[i])
                 {
                         return i+1;
                 }
          }
          return 0;
}

int main()
 {
              int iSize = 0,iCnt = 0,iNo = 0;
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

                printf("\n\n ==================First occurrence of Number in Array============================== \n");

                printf("\n Enter Number to Check Weather it is in Array and return its Address =>");
                scanf("%d",&iNo);

                iRet =  FirstOcc(p, iSize,iNo);

               if(iRet == 0)
              {
                         printf("\n Given Number %d Not There in  Array",iNo);
              }

              else
              {
                     printf("\n Given Number %d First occurrence of number is => %d",iNo,iRet);
              }

            printf("\n\n ======================================================================== \n");


               free(p);

              return 0;
}


