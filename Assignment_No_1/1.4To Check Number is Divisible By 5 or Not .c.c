////////////////////////////////////////////////////////////////////////////////////////////////////
///To Check Weather Given Number is Divisible by 5 or Not.
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

BOOL Division(BOOL *iNum)
{
      if(*iNum%5 == 0)
      {
             return TRUE;
      }
      return FALSE;
}

BOOL main()
{
      BOOL iNo = 0,Ret = 0;

      printf("\n ================================================================= \n");

      printf("\n Enter a Number to Check Weather it is Divisible by 5 or Not =>");
      scanf("%d",&iNo);

      Ret = Division(&iNo);

      printf("\n\n =============================================================== \n");
      if(Ret == TRUE)
      {
            printf("\n Given Number %d is Divisible by 5",iNo);
      }
      else
      {
             printf("\n Given Number %d is Not Divisible by 5.",iNo);
      }

      printf("\n\n ============================================================== \n");


      getch();
      return 0;

}
