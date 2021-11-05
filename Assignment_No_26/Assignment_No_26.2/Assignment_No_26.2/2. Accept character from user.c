/////////////////////////////////////////////////////////////////////////////////////////////
/*2. Accept character from user. If character is small display its corresponding capital 
     character, and if it small then display its corresponding capital. In other cases display as it is. 
*/
// Input :  Q 
// Output : q 
// Input :  m 
// Output : M 
// Input :  4 
// Output : 4   
// Input :  % 
// Output : %  
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{

	  printf("\n\n =======================ASCII Value========================== \n");

	  if(ch >= 65 && ch <= 90)
	  {
		    printf("\n Given Character Small Case is => %c.",ch = ch + 32);
	  }
	  else
	  {
		   if(ch >= 97 && ch <= 122)
		   {
			      printf("\n Given Character Upper Case is => %c.",ch = ch - 32); 
		   }
		   else
		   {
			      printf("\n Given Character is Not a Character => %c.",ch);
		   }
	  }

	   printf("\n\n =======================ASCII Value========================== \n");

}

int main()
{
	 char cValue = '\0';

	 printf("\n Enter a Character =>");
	 scanf("%c",&cValue);

	 Display(cValue); 

	 return 0;
}