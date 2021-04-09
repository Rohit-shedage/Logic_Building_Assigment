#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
       int i = 0;
       if(iNo < 0)
       {
             iNo = -iNo;
       }
       for(i = 1;i <= iNo*2;i++)
       {
             if(i <= iNo)
             {
                    printf(" *");
                   // continue;
                   break;
             }
            printf(" $");
       }
       return;
}
int main()
{
      int iValue = 0;

      printf("\n Enter a Number to print \"*\" and \"$\" =>");
      scanf("%d",&iValue);

      Display(iValue);

      getch();
      return 0;
}
