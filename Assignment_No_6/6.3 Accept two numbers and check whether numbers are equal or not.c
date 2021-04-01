#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkEqual(BOOL iNo1,BOOL iNo2)
{
      if(iNo1 == iNo2)
       {
           return TRUE;
      }
      else if(iNo1 - iNo2 || iNo1 != iNo2)
      {
              return FALSE;
      }

      //return FALSE;
}
BOOL main()
{
      BOOL iValue1 = FALSE,iValue2 = FALSE, iRet = FALSE;

      printf("\n ---------------------------------------------------------------------------------------------------------------------- \n");

      printf("\n Enter Two Number To Check Weather it is \"Equal\" or  \"Not Equal\" =>");
      scanf("%d%i",&iValue1,&iValue2);

       printf("\n ---------------------------------------------------------------------------------------------------------------------- \n");


      iRet = ChkEqual(iValue1,iValue2);
      if(iRet == TRUE)
      {
             printf("\n Given Two Number %d & %i is \"EQUAL\"",iValue1,iValue2);
      }
      else
      {
            printf("\n Given Two Number %d & %i is \"NOT EQUAL\"",iValue1,iValue2);
      }
       printf("\n ---------------------------------------------------------------------------------------------------------------------- \n");

      getch();
      return FALSE;
}
