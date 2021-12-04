///////////////////////////////////////////////////////////////////////////////////////////////////
/// 4. Write a program which accept string from user and check whether it contains vowels in it or not. 
/// Input :   “marvellous” 
/// Output :   TRUE 
/// Input :   “Demo” 
/// Output :   TRUE 
/// Input :   “xyz” 
/// Output :   FALSE 
////////////////////////////////////////////////////////////////////////////////////////////////////
/// Vowels => a,e,i,o,u
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
	 
	 while(*str != '\0')
	 {
		   if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
		   {
			    return TRUE;
		   }
		   *str++;
	 }

	 return FALSE;
}

int main()
{
	   char  arr[30] = "";
	   BOOL bRet = 0;

	   printf("\n Enter a String to Check it contains vowels in it or not =>");
	   scanf("%[^\n]s",&arr);

	   bRet = ChkVowel(arr);

	   printf("\n\n ==================String contains vowels in it or Not================== \n");

	   if(bRet == TRUE)
	   {
		    printf("\n Given String Contain Vowels \"a,e,i,o,u\" =>%s.",arr);
	   }
	   else
	   {
		    printf("\n Given String Not Contain Vowels \"a,e,i,o,u\" =>%s.",arr);
	   }
	  


	   printf("\n\n ==================String contains vowels in it or Not================== \n");

	   return 0;
}