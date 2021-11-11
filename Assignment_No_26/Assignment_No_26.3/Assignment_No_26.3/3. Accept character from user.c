///////////////////////////////////////////////////////////////////////////////////////
/*3. Accept character from user. If it is capital then display all the characters from 
     the input characters till Z. If input character is small then print all the characters 
	 in reverse order till a. In other cases return directly. 
*/
// Input :  Q 
// Output : Q R S T U V W X Y Z 
// Input :  m 
// Output : m l k j i h g f e d c b a 
// Input :  8 
// Output :
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
	  
	  printf("\n\n =====================ASCII Character========================= \n");

	  if(ch >= 65 && ch <= 97)
	  {
		    while(ch <= 90)
			{
				 printf("\t %c",ch);
				 ch++;
			} 
	  }
	  else
	  {
		    if(ch >= 97 && ch <= 122)
			{
					while(ch >= 97)
					{
						 printf("\t %c",ch);
						 ch--;
					}   
			}
			else
			{
				   printf("\n\t Invalid Character OR it is Not a Character");
			}
	  }

	  printf("\n\n =====================ASCII Character========================= \n");

	  return;
}

int main()
{
	  char cValue = '\0';

	  printf("\n Enter a Character =>");
	  scanf("%c",&cValue);

	  Display(cValue);

	  return 0;
}