//////////////////////////////////////////////////////////////////////////////////////////////
/// 4. Accept Character from user and check whether it is small case or not (a-z).  
/// Input :  g 
/// Output :  TRUE 
/// Input :  D 
/// Output :  FALSE   
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 
BOOL ChkCapital(char ch)
{  
	   if(ch >= 97 && ch <= 122)
	   {
		     return TRUE;
	   }

	   return FALSE;
} 

int main() 
{  
	   char cValue = '\0';  
	   BOOL bRet = FALSE; 

	   printf("\n ======================================================= \n");

       printf("\n Enter the character to Wheather it is Small Case or Not => "); 
	   //scanf("%c",&cValue);
	   cValue = getche();

	   printf("\n ========================================================== \n");

       bRet = ChkCapital(cValue); 

       if(bRet == TRUE)  
	   {   
		      printf("\n Given Character \'%c'\ is a Small Case Character \n",cValue);  
	   }  
	   else 
	   {   
		      printf("\n Given \'%c'\ is not a Small Case Character \n",cValue); 
	   }  

	   printf("\n\n ======================================================== \n");
	   
	   return 0; 
}