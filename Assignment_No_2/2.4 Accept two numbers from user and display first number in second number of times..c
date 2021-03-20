#include<stdio.h>
#include<conio.h>
void Display(int iNo1,int iNo2)
{
      int i = 0;
      printf("\n ===================================== \n");
         for(i = 1;iNo2 >= i;i++)
         {
               printf(" %d",iNo1);
         }
      printf("\n ===================================== \n");

      return;
}
int main()
{
      int iValue1 = 0,iValue2 = 0;

      printf("\n Enter Two Numbers  To Display first number in second number of times  =>");
      scanf("%d%d",&iValue1,&iValue2);

      Display(iValue1,iValue2);
      getch();
      return 0;
}
