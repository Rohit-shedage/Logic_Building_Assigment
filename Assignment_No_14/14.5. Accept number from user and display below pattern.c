////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 5. Accept number from user and display below pattern.
/// Input :  8
/// Output : 2 4 6 8 10 12 14 16
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{
           int i = 2,j = 1;

           printf("\n ============================================ \n");

           while(j <= iNo)
           {
                 printf(" %d",i*j);
                 j++;
           }

           printf("\n\n ============================================ \n");
           return;
}
int main()
{
        int iValue = 0;

        printf("\n Please Enter Integer Number =>");
        scanf("%d%d",&iValue);

        Pattern(iValue);
}
