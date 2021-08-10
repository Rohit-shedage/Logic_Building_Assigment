//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*5. Accept N numbers from user and accept one another number as NO , return frequency of NO form it. */
///  Input :  N :   6
 /// No:  66
 /// Elements : 85 66 3 66 93 88
 /// Output : 2
///////////////////////////////////////////////////////////////
///  Input :  N :   6
/// No:  12
/// Elements : 85 11 3 15 11 111
/// Output : 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Frequency(int Arr[], int iLength,int iNo)
{
          int i = 0,CSrch = 0;///CountSearch => Variable

          for(i = 0;i < iLength;i++)
          {
                 if(Arr[i] == iNo)
                 {
                         CSrch++;
                 }
          }

         return CSrch;
}

int main()
 {
              int iSize = 0,iRet = 0,iCnt = 0,iNo = 0;/// iNo Taken For Search the Number in Array
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

                printf("\n\n ============== Search the Number Time Occur in Array==================== \n");

                printf("\n Enter Number to Check Number Time Occur in Array =>");
                scanf("%d",&iNo);

                printf("\n\n ================== Number Times Occur in Array========================= \n");

                iRet = Frequency(p, iSize,iNo);

                printf("\n Given Number %d   Occurs in Array => %d Times.",iNo,iRet);

               printf("\n\n ======================================================================== \n");


               free(p);

              return 0;
}


