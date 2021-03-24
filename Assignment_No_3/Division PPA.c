#include<stdio.h>
#include<conio.h>
void Display()
{
      int cnt = 5;

      printf("\n Print only 5 To 1 Number =>");
      while(cnt >= 1)
      {
            printf("%d",cnt);
            cnt--;
      }
      return;
}
int main()
{
      Display();

      getch();
      return 0;
}
