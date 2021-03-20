#include"Header.h"
void DisplayConvert(ALPHA cNo)
{
    printf("\n ===================================== \n");

      if(cNo>='a' && cNo<='z')
      {
          cNo = cNo -32;
           printf("\n Upper Case Character is =>%c.",cNo);
      }
      else if( cNo >= 'A' && cNo <= 'Z')
      {
           cNo = cNo + 32;
           printf("Lower Case Character is =>%c.",cNo);
      }
       printf("\n ===================================== \n");

        return;
}
BOOL main()
{
      ALPHA cValue = '\0';

      printf("\n Enter a Character To Convert Lower Case to Upper Case and Upper Case to Lower =>");
      scanf("%c",&cValue);

      DisplayConvert(cValue);

      getch();
      return 0;
}
