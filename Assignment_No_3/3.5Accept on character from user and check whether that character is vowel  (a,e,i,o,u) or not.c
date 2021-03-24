#include"Header.h"
BOOL Chkvowel(ALPHA cNo)
{
   // printf("\n ===================================== \n");
      ALPHA ch ='\0';


      if(cNo == 'a' || cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u' || cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U')
      {
                return TRUE;
       }

      // printf("\n ===================================== \n");

        return FALSE;
}
BOOL main()
{
      ALPHA cValue = '\0';
      BOOL iRet = 0;

      printf("\n Enter a Character to Check Weather it is \"VOWEL\" or Not =>");
      scanf("%c",&cValue);


       iRet = Chkvowel(cValue);
       if(iRet == TRUE)
       {
              printf("\n Given Character %c is \"Vowel\" ",cValue);
       }
       else
       {
              printf("\n Given Character %c is \" Not Vowel\" ",cValue);
       }
      getch();
      return 0;
}
