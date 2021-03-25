#include<stdio.h>
#include<conio.h>
float Income_tax(int iAmount)
{
      if(iAmount < 500000)
      {
             return iAmount;
      }
      else if(iAmount>=500000 && iAmount<1000000)
      {
          return ((iAmount-500000)*10)/100;
      }
      else if(iAmount>=1000000 && iAmount<2000000)
      {
          return ((iAmount-1000000)*20)/100+500000;
      }
      else if(iAmount>=2000000)
      {
           return ((iAmount-2000000)*30)/100+50000+200000;
      }
}
int main()
{
    int iAmount = 0;
    float iRet = 0;

    printf("\n Enter Income to give its Income Tax =>");
    scanf("%d",&iAmount);

    iRet = Income_tax(iAmount);

    printf("\n Given Income Tax is =>%0.2f.",iRet);

    getch();
    return 0;


}
