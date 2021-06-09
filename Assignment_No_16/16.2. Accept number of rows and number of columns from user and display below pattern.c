///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 2. Accept number of rows and number of columns from user and display below pattern.
/// Input :  iRow = 4  iCol = 4
/// Output : A B C D
///               a b c d
///              A B C D
///               a b c d
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
            int i = 0,j = 0;
            char ch = 'A';
            static char cchh = '\0';

            printf("\n ============================================== \n");

            for(i = 1;i <= iRow;i++)
            {
                    ch = 'A';

                  for(j = 1;j <= iCol;j++,ch++)
                  {
                          if(i%2 == 0)
                          {
                              ch=96+j;
                              printf(" %c",ch++);
                          }
                          else
                         {
                              printf(" %c",ch);
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
