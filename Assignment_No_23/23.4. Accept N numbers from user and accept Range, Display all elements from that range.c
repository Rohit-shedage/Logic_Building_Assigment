//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 4. Accept N numbers from user and accept Range, Display all elements from that range.*/
///  Input :  N :   6
///  Start: 60
///  End :  90
///  Elements : 85 66 3 76 93 88
///  Output : 66 76 88
///////////////////////////////////////////////////////////////
///  Input :  N :   6
///  Start: 30
///   End :  50
///  Elements : 85 66 3 76 93 88
/// Output :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Warning: incompatible implicit declaration of built-in function 'malloc' [enabled by default]
// Solution -> #include<stdlib.h> OR #include<malloc.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength,int iStart,int iEnd)
{
          int i = 0;

          printf("\n\n ============================================================= \n");

          for(i = 0;i < iLength;i++)
          {
                 if(iStart <= Arr[i] && iEnd >= Arr[i])
                 {
                        printf("\n\t Start To End Point Number are => %d.",Arr[i]);
                 }
          }

           printf("\n\n ============================================================= \n");

          return;
}

int main()
 {
              int iSize = 0,iCnt = 0,iStart = 0,iEnd = 0;
              int *p = NULL;

              printf("\n Enter number of elements =>");
              scanf("%d",&iSize);

               p = (int*)malloc(iSize * sizeof(int));

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

                printf("\n Enter Number To Start Displaying From it =>");
                scanf("%d",&iStart);

                printf("\n Enter Number for End to Stop Displaying  =>");
                scanf("%d",&iEnd);

               Range(p,iSize,iStart,iEnd);

               free(p);

              return 0;
}


