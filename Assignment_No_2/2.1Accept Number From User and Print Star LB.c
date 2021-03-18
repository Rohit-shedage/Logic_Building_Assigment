#include<stdio.h>
#include<conio.h>
void Star_P(int iNo)
{
      int cnt = 0;

      printf("\n ===================================== \n");

      for(cnt = 1;cnt <= iNo;cnt++)
      {
            printf(" *");
      }
      printf("\n ===================================== \n");

      return;
}
int main()
{
      int iValue = 0;

      printf("\n Enter a Number To Print \"*\" That Number Times =>");
      scanf("%d",&iValue);

      Star_P(iValue);
      getch();
      return 0;
}
