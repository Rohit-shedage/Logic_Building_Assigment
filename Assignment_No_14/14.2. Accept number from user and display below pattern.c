////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 2. Accept number from user and display below pattern.
/// Input :  5
/// Output : 5 # 4 # 3 # 2 # 1 #
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{

       printf("\n ============================================ \n");

       while(iNo >= 1)
       {
             printf(" %d",iNo);
             printf(" #");
             iNo--;
       }

       printf("\n\n ============================================ \n");
       return;
}
int main()
{
        int iValue = 0;

        printf("\n Please Enter Integer Number =>");
        scanf("%d",&iValue);

        Pattern(iValue);
}
