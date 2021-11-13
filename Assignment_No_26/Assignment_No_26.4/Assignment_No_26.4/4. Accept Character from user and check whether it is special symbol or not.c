///////////////////////////////////////////////////////////////////////////////////////////////////
/*4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). */
// Input :  % 
// Output :  TRUE 
// Input :  d 
// Output :  FALSE 
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	
		if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
		{
			  return TRUE;
		}

		return FALSE;
}

int main()
{
		char cValue = '\0';
		BOOL bRet = 0;

		printf("Enter the character =>"); 
		scanf("%c",&cValue); 

		bRet =  ChkSpecial(cValue); 

		printf("\n\n =============Special Symbol================== \n");

		if(bRet == TRUE)  
		{   
			    printf("\n It is special Symbol");  
		} 
		else 
		{  
			   printf("\n It is not a special Symbol"); 
		}  

		printf("\n\n =============Special Symbol================== \n");

		
		return 0; 

}