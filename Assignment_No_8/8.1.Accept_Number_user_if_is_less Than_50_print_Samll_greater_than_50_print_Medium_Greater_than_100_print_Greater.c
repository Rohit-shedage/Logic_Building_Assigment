#include<stdio.h>
#include<conio.h>
void Number(int iNo)
{
      if(iNo > 0 && iNo < 50)
      {
            printf("\n Given Number is \"Small\"");
      }
      else if(iNo >= 50 && iNo < 100)
      {
             printf("\n Given Number is \"Medium\"");
      }
      else
      {
          printf("\n Given Number is \"Large\"");
      }
      return;
}
int main()
{
      int iValue = 0;

      printf("\n Enter  a Number =>");
      scanf("%d",&iValue);

      Number(iValue);

      getch();
      return 0;
}
