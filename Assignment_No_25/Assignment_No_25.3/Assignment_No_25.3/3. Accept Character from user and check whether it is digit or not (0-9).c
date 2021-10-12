//////////////////////////////////////////////////////////////////////////////////////////////
/// 3. Accept Character from user and check whether it is digit or not (0-9).  
/// Input :  7 
/// Output :  TRUE 
/// Input :  d 
///  Output :  FALSE 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 
BOOL  ChkDigit(char ch)
{  
	   if(ch >= 48 && ch <= 57 )
	   {
		     return TRUE;
	   }

	   return FALSE;
} 

int main() 
{  
	   char cValue = '\0';  
	   BOOL bRet = FALSE; 

	   printf("\n ================================================================== \n");

       printf("\n Enter the character or Digit to Check Wheather it is Digit or Not => "); 
	   scanf("%c",&cValue);

	   printf("\n ================================================================== \n");

       bRet =  ChkDigit (cValue); 

       if(bRet == TRUE)  
	   {   
		      printf("\n Given Number \'%c'\ is Digit \n",cValue);  
	   }  
	   else 
	   {   
		      printf("\n Given \'%c'\ is Not a Digit \n",cValue); 
	   }  

	   printf("\n\n ============================================================== \n");
	   
	   return 0; 
}