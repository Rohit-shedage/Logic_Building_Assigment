#include<stdio.h>
#include<conio.h>
int  SumNonFact(int iNo)
{
      int cnt = 1,sum1 = 0,sum2 = 0;
      if(iNo <= 0)
      {
            return;
      }

      while(iNo>cnt)
      {
            if(iNo%cnt != 0)
            {
                  sum1 = sum1 + cnt;
            }
            else
            {
                  sum2 = sum2 + cnt;
            }
            cnt++;
      }
      return sum2 - sum1;
}
int main()
{
      int iValue = 0,iRet = 0;

      printf("\n ------------------------------------------------------------ \n");

      printf("\n Enter Number to Display its Multiplication of Factors =>");
      scanf("%d",&iValue);

       iRet = SumNonFact(iValue);

        printf("\n ------------------------------------------------------------ \n");

       printf("\n Non Factors Sum is => %d.",iRet);

        printf("\n ------------------------------------------------------------ \n");

      getch();
      return 0;
}
