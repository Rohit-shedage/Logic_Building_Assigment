//////////////////////////////////////////////////////////////////////////////////////////////////
/// 1.Write a program which accept string from user and convert it into lower case. 
/// Input :   “Marvellous Multi OS” 
/// Output :   marvellous multi os 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
	  while(*str != '\0')
	  {
		   if(*str >= 65 && *str <= 90)
		   {
			    *str = *str + 32;
		   }
		   *str++;
	  }

	  
	  return;
}

int main()
{
	  char arr[20]; 

      printf("\n Enter string convert it into lower case =>");  
	  scanf("%[^’\n’]s",arr); 

      strlwrx(arr); 

	  printf("\n\n ===================Upper to lower case================= \n");

	  printf("\n Modified string is => %s.",arr); 

	  printf("\n\n ===================Upper to lower case================= \n");

      return 0; 
}