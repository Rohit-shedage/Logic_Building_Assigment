//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 5. Accept N numbers from user and display all such elements which are multiples of 11. */
///    Input :  N :   6
///    Elements : 85 66 3 55 93 88
///   Output : 66 55 88
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int Arr[], int iLength)
{
          int i = 0;

          printf("\n\n ==================Multiples of 11 in Array======================= \n");


          for(i = 0;i < iLength;i++)
          {
                   if(Arr[i]%11 == 0)
                   {
                            printf("\n Multiples of 11 in Array are => %d.",Arr[i]);
                  }
          }

           printf("\n\n ======================================================================== \n");


          return;
}

int main()
 {
              int iSize = 0,iCnt = 0;
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


                 Display(p, iSize);


               free(p);

              return 0;
}


