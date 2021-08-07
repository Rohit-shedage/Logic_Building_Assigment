//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 4. Accept N numbers from user and return frequency of 11 form it. */
///  Input :  N :   6
///  Elements : 85 66 3 15 93 88
///  Output : 0
///////////////////////////////////////////////////////////////
///  Input :  N :   6
///  Elements : 85 11 3 15 11 111
/// Output : 2
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Frequency(int Arr[], int iLength)
{
          int i = 0,Srch = 11,CSrch = 0;///CountSearch => Variable

          for(i = 0;i < iLength;i++)
          {
                 if(Srch == Arr[i])
                 {
                         CSrch++;
                 }
          }

         return CSrch;
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

                printf("\n\n ==================frequency of 11 form Number in Array========================= \n");

                iRet = Frequency(p, iSize);

                printf("\n Frequency of Number 11 from Given  Array is => %d.",iRet);

               printf("\n\n ======================================================================== \n");


               free(p);

              return 0;
}


