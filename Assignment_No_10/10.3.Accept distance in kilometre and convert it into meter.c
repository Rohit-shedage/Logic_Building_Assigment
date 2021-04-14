/*
3. Write a program which accept distance in kilometre and convert it into meter.
(1 kilometre = 1000 Meter)
*/
#include<stdio.h>
#include<conio.h>
int KMtoMeter(int iNo)
{
      return 1000*iNo;
}
int main()
{
         int iValue = 0, iRet = 0;
        printf("Enter distance To calculate into Meter =>");
        scanf("%d",&iValue);

        iRet = KMtoMeter(iValue);
        printf("\n Given Distance %d into meter is=> %d.",iValue,iRet);

        getch();
        return 0;
}
