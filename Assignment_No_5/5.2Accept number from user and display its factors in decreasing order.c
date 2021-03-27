#include<stdio.h>
#include<conio.h>
void FactRev(int iNo)
{
      int cnt = (iNo/2);
      if(iNo <= 0)
      {
            return;
      }

      while(iNo>=cnt)
      {
            if(iNo%cnt == 0)
            {
                  printf(" %d",cnt);
            }
            cnt--;
      }
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
