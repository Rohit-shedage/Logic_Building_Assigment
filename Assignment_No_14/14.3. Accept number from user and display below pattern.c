////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 3. Accept number from user and display below pattern.
/// Input :  5
/// Output : 1 * 2 * 3 * 4 * 5 *
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{
       int i = 1;

       printf("\n ============================================ \n");

       while(i <= iNo)
       {
             printf(" %d",i);
             printf(" *");
             i++;
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
