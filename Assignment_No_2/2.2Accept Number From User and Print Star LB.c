#include<stdio.h>
#include<conio.h>
void Star_P(int iNo)
{


      printf("\n ===================================== \n");

      while(iNo > 0)
      {
            printf(" *");
            iNo--;
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
