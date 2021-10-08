//////////////////////////////////////////////////////////////////////////////////////////////
/// 2. Accept Character from user and check whether it is capital or not (A-Z). 
/// Input :  F 
/// Output :  TRUE 
/// Input :  d 
/// Output :  FALSE  
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 
BOOL ChkCapital(char ch)
{  
	   if(ch >= 65 && ch <= 90)
	   {
		     return TRUE;
	   }

	   return FALSE;
} 

int main() 
{  
	   char cValue = '\0';  
	   BOOL bRet = FALSE; 

	   printf("\n ======================================== \n");

       printf("\n Enter the character => "); 
	   //scanf("%c",&cValue);
	   cValue = getche();

	   printf("\n ======================================== \n");

       bRet = ChkCapital(cValue); 

       if(bRet == TRUE)  
	   {   
		      printf("\n Given Character \'%c'\ is a Capital Character \n",cValue);  
	   }  
	   else 
	   {   
		      printf("\n Given \' %c '\ is not a Capital Character \n",cValue); 
	   }  

	   printf("\n\n ======================================== \n");
	   
	   return 0; 
}