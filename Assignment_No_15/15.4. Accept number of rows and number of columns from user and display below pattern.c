///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 4. Accept number of rows and number of columns from user and display below pattern.
/// Input :  iRow = 3  iCol = 4
/// Output : * # * #
///              * # * #
///              * # * #
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
            int i = 0,j = 0,Temp=  iCol;

            printf("\n ============================================== \n");

            for(i = 1;i <= iRow;i++)
            {

                  for(j = 1;j <= iCol;j++)
                  {
                        if(j%2 == 0)
                        {
                              printf(" #");
                        }
                        else
                        {
                               printf(" *");
                        }
                  }
                  printf("\n");
            }

            printf("\n ============================================== \n");

            return;
}



int main()
{
         int iValue1 = 0, iValue2 = 0;

         printf("\n Enter number of rows and columns =>");
         scanf("%d %d",&iValue1, &iValue2);

        Pattern(iValue1, iValue2);
        return 0;
}