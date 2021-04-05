#include<stdio.h>
#include<conio.h>
void Multi_display(int iNo)
{
      int i = 0,j = 5;
      for(i = 1;i <= 5;i++)
      {
             printf(" %d",i*iNo);
      }
      return;
}
int main()
{
      int iValue = 0;

      printf("\n Enter a Number and Print first 5 Multiples of Number =>");
      scanf("%d",&iValue);

      Multi_display(iValue);

      getch();
      return 0;
}
