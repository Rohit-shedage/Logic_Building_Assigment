#include<stdio.h>
#include<conio.h>
void Star_P(int iNo)
{
      int cnt = 0;

      for(cnt = 1;cnt <= iNo;cnt++)
      {
            printf("*");
      }
      return;
}
int main()
{
      int iValue = 0;
      iValue = 5;

      Star_P(iValue);
      getch();
      return 0;
}
