/*
1.Write a program which accept number from user and display its digits in reverse order.
*/

#include<stdio.h>
#include<conio.h>
void DisplayDigit(int iNo)
{
      int Dig = 0;

      if(iNo < 0)
      {
            iNo = -iNo;
      }

      while( iNo > 0)
      {
            Dig = iNo%10;
            printf("\n %d",Dig);
            iNo /= 10;
      }
      return;
}
int main()
{
       int iValue = 0;

      printf("Enter number to Reverse of That Number =>");
      scanf("%d",&iValue);

      DisplayDigit(iValue);

      getch();
      return 0;
}
