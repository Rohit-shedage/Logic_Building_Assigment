#include"Header.h"
void Print_even(BOOL iNo)
{
      BOOL cnt = 0;

      while(iNo>0)
      {
            cnt = cnt + 2;
            printf(" %d",cnt);
            iNo--;
      }


}
BOOL main()
{
      BOOL iValue = 0;

      printf("\n Enter a Number to Check its \"EVEN\" Count =>");
      scanf("%d",&iValue);

      Print_even(iValue);

      getch();
      return 0;
}
