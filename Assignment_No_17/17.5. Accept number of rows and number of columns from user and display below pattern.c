///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 5. Accept number of rows and number of columns from user and display below pattern.
/// Input :  iRow = 4  iCol =  4
/// Output : 1 2 3 4
///               2 3 4 5
///               3 4 5 6
///               4 5 6 7
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
            int i = 0,j = 0,Temp = 1;
            printf("\n ============================================== \n");

            for(i = 1;i <= iRow;i++)
            {
                Temp = i;
                  for(j = 1;j <= iCol;j++)
                  {
                              printf(" %d",Temp);
                              Temp += 1;
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
