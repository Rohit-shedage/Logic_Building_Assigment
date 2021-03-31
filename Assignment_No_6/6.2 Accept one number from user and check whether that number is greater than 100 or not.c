#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkGreater(BOOL iNo)
{
      if(iNo > 100)
       {
           return TRUE;
      }
      else if(iNo <= 100)
      {
              return FALSE;
      }

      //return FALSE;
}
BOOL main()
{
      BOOL iValue = 0, iRet = 0;

      printf("\n ---------------------------------------------------------------------------------------------------------------------- \n");

      printf("\n Enter Number To Check Smaller Than 100 \"Smaller\" Greater Than 100 \"Greater\" =>");
      scanf("%d",&iValue);

       printf("\n ---------------------------------------------------------------------------------------------------------------------- \n");


      iRet = ChkGreater(iValue);
      if(iRet == TRUE)
      {
             printf("\n Given Number %d is \"Greater\"",iValue);
      }
      else
      {
            printf("\n Given Number %d is \"Smaller\"",iValue);
      }
       printf("\n ---------------------------------------------------------------------------------------------------------------------- \n");

      getch();
      return FALSE;
}
