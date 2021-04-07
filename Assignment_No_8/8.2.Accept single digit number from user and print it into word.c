#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
       if(iNo < 0)
       {
              iNo = -iNo;
       }
       if(iNo == 0)
       {
             printf("\n\t \"Zero\"");
             return;
       }
       switch(iNo)
       {
               case 1:
                           printf("\n\t \"One\"");
                           break;
               case 2:
                          printf("\n\t \"Two\"");
                          break;
              case 3:
                          printf("\n\t \"Three\"");
                          break;
             case 4:
                        printf("\n\t \"Four\"");
                        break;
              case 5:
                         printf("\n\t \"Five\"");
                         break;
              case 6:
                         printf("\n\t \"Six\"");
                         break;
               case 7:
                          printf("\n\t \"Seven\"");
                          break;
                case 8:
                           printf("\n\t \"Eight\"");
                           break;
                case 9:
                           printf("\n\t \"Nine\"");
                           break;
                default:
                            printf("\n\t Invalid Number.....!!!");
       }
}
int main()
{
      int iValue = 0;

      printf("\n Enter a Single digit number print it word =>");
      scanf("%d",&iValue);

      Display(iValue);

      getch();
      return 0;
}
