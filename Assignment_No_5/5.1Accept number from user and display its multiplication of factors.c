#include<stdio.h>
#include<conio.h>
int MultiFact(int iNo)
{
      int cnt = 1,sum = 1;
      if(iNo <= 0)
      {
            return;
      }

      while(iNo>cnt)
      {
            if(iNo%cnt == 0)
            {
                  sum = sum * cnt;
            }
            cnt++;
      }
      return sum;
}
int main()
{
      int iValue = 0,iRet = 0;

      printf("\n ------------------------------------------------------------ \n");

      printf("\n Enter Number to Display its Multiplication of Factors =>");
      scanf("%d",&iValue);

      iRet = MultiFact(iValue);

      printf("\n Multiplication of Factors are =>%d.",iRet);

       printf("\n ------------------------------------------------------------ \n");


      getch();
      return 0;
}
