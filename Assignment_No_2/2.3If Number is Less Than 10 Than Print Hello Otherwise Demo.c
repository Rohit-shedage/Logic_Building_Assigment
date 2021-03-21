#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
      printf("\n ===================================== \n");
      if(iNo <= 10 )
            printf("\n Hello");
      else
            printf("\n Demo");

      printf("\n ===================================== \n");

      return;
}
int main()
{
      int iValue = 0;

      printf("\n Enter a Number if Number Less than 10 \"Hello\" Otherwise \"Demo\" =>");
      scanf("%d",&iValue);

      Display(iValue);
      getch();
      return 0;
}
