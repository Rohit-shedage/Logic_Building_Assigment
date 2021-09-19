//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 4. Accept N numbers from user and display all such numbers which contains  3 digits in it. */
/// Input :  N :   6
///  Elements : 8225  665 3 76 953 858
/// Output : 665 953 858
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>


void  Digits(int Arr[], int iLength)
{
          int i = 0,Dig = 0,Temp = 0,Cnt = 0;

           printf("\n\n =====================Print Only 3 Digit Element in Array============================== \n");


          for(i = 0;i < iLength;i++)
          {
                  Temp = Arr[i];
                  Cnt = 0;  // Reinitialized Cnt Variable Because Cnt Value Is Increase In Loop
                  while(Temp > 0)
                  {
                         Dig = Temp%10;
                         Cnt++;
                         Temp/=10;
                  }
                  if(Cnt == 3)
                  {
                          printf("\n Three Digit Element is => %d.",Arr[i]);
                  }
          }

             printf("\n\n ======================================================================== \n");


          return;
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


             Digits(p, iSize);

            free(p);

            return 0;
}


