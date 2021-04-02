#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float Percentage(int Tno,int Ono)
{
       if(Tno*Ono == 0 || Tno < Ono)
       {
             printf("\n Wrong Input");
             exit(0);//Use Header File stdlib.h
       }
       return (Ono*100)/Tno;
}
int main()
{
      int iTotal = 0,iObtain = 0;
      float iRet = 0.0;

      printf("\n Enter Your Total Mark and Obtained Marks to Check Percentage =>");
      scanf("%d%i",&iTotal,&iObtain);

      iRet = Percentage(iTotal,iObtain);

      printf("\n Your Percentage is =>%0.2f",iRet);

      getch();
      return 0;
}
