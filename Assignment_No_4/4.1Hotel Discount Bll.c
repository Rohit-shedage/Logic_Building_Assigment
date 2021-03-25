#include<stdio.h>
#include<conio.h>
int Discount(int iAmount)
{
      if(iAmount < 500)
      {
            return;
      }
      else if(iAmount >= 500 && iAmount < 1500)
      {
            return iAmount-(iAmount/10);
      }
      else if(iAmount >=1500)
      {
            return iAmount-(iAmount/15);
      }
}
int main()
{
     int iAmount = 0;

     printf("\n Enter a Amount of Bill To Give Discount =>");
     scanf("%d",&iAmount);



     printf("\n The Amount %d Discount is => %d.",iAmount,Discount(iAmount));

}
