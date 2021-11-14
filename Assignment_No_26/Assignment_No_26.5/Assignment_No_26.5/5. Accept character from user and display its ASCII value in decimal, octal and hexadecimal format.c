//////////////////////////////////////////////////////////////////////////////////////////////////
/* 5. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format. 
*/
// Input :   A 
// Output :  Decimal        65 
//           Octal        0101   
//           Hexadecimal  0X41 
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
	  printf("\n\n ===========================Decimal, Octal, Hexadecimal========================================= \n");

	  printf("\n Given Character = %c. \n\n\t Decimal = %d. \n\n\t Octal = 0%o. \n\n\t Hexadecimal = 0X%x.",ch,ch,ch,ch);

	  printf("\n\n ===========================Decimal, Octal, Hexadecimal========================================= \n");
	  
}

int main()
{
	  char cValue = '\0';

	  printf("\n Enter a Character for its Decimal,Octal,Hexadecimal =>");
	  scanf("%c",&cValue);

	  Display(cValue);

	  return 0;
}