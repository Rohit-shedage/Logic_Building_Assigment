#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
      int i = 0;

      for(i = -iNo;i <= iNo;i++)
      {
            printf(" %d",i);
      }
      return;
}
int main()
{
      int iValue = 0;

      printf("\n Enter a Number to Print its Number Line =>");
      scanf("%d",&iValue);

     Display(iValue);
     getch();
     return 0;
}
