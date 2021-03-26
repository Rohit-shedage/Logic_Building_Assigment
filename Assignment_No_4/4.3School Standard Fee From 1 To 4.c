#include<stdio.h>
#include<conio.h>
void School_fee(istandard)
{
      switch(istandard)
      {
        case 1:
            printf("\n 1st Standard Fee are \"8900rs\".");
            return;
        case 2:
            printf("\n 2nd Standard Fee are \"12790rs\".");
            return;
        case 3:
            printf("\n 3rd Standard Fee are \"21000rs\".");
            return;
        case 4:
            printf("\n 4th Standard Fee are \"23450rs\".");
            return;

        default:
            printf("\n Wrong Input");
      }
}
int main()
{
      int istandard = 0;

      printf("\n Enter Standard it is Primary school \"1 to 4\" to See fee =>");
      scanf("%d",&istandard);

       School_fee(istandard);
       return 0;
}
