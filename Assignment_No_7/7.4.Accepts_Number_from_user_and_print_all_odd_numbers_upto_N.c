#include<stdio.h>
#include<conio.h>
void  Odd_display(int iNo)
{
      int i = 0;
      for(i = 1;i <= iNo;i++)
      {
            if(i%2 != 0)
            {
                  printf(" %d",i);
            }
      }
      return;
}
int main()
{
      int iValue = 0;

      printf("\n Enter a Number to print its odd Number upto that number =>");
      scanf("%d",&iValue);

      Odd_display(iValue);
      getch();
      return 0;
}
