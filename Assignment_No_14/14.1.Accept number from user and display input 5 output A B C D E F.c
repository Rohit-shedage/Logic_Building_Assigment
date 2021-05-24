////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 1. Accept number from user and display below pattern.
/// Input :  5
/// Output : A B C D E
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{
    int i = 0;
       char ch = 'A' ;
       printf("\n ============================================ \n");
       for(i = 1;i <= iNo;i++,ch++)
       {
             printf("\n %c",ch);
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
