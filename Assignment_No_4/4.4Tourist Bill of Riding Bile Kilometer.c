#include<stdio.h>
#include<conio.h>
int Tourists_Bill(int iKilo)
{
     int iRet = 0;
      if(iKilo < 100)
      {
             iRet = iKilo*25;
      }
      else if(iKilo >= 100)
      {
           iRet =  iKilo*15;
      }
      return iRet;
}
int main()
{
      int iKilo = 0,iRet = 0;

      printf("\n Enter Kilometer you have Ride Bike to give its Bill =>");
      scanf("%d",&iKilo);
      iRet = Tourists_Bill(iKilo);

      printf("\n You Ride Bike Kilometer %d Your Bill is =>%d.",iKilo,iRet);

      getch();
      return 0;
}
