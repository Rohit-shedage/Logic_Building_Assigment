#include<stdio.h>
#include<conio.h>
void FactRev(int iNo)
{
      int cnt = 1;
      if(iNo <= 0)
      {
            return;
      }

      printf("\n ------------------------------------------------------------- \n");
      while(iNo>cnt)
      {
            if(iNo%cnt != 0) //iNo%2 != o Takes 4.223s & Do Take No/2 if 10 is Input its Will Print 2,3,4,6,7,8,9..
            {
                  printf(" %d",cnt);
            }
            cnt++;
      }
      printf("\n\n --------------------------------------------------------------- \n");
      return;
}
int main()
{
      int iValue = 0;

      printf("\n ------------------------------------------------------------ \n");

      printf("\n Enter Number to Display its Multiplication of Factors =>");
      scanf("%d",&iValue);

      FactRev(iValue);

      getch();
      return 0;
}
