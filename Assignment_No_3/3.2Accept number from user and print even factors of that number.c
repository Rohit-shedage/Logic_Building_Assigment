//#include<stdio.h>
//#include<conio.h>
#include"Header.h"
void DisplayFactor(BOOL iNo)
 {
        int i = 0;
       if(iNo <= 0)
       {
            return;
       }
       for(i = 1; i< iNo ;i++)
       {
             if(iNo%i==0 && i%2==0)
             {
                    printf(" %d",i);
              }
       }

}
BOOL main()
 {
        BOOL iValue = 0;

        printf("\n Enter number =>");
        scanf("%d",&iValue);

        DisplayFactor(iValue);

       return 0;
 }
