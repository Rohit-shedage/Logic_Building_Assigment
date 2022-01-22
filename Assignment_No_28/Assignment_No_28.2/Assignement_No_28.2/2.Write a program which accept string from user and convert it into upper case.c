//////////////////////////////////////////////////////////////////////////////////////////////////
/// 2.Write a program which accept string from user and convert it into upper case.  
/// Input :   “Marvellous Multi OS” 
/// Output :   MARVELLOUS MULTI OS 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void  struprx(char *str)
{
	  while(*str != '\0')
	  {
		   if(*str >= 97 && *str <= 122)
		   {
			    *str = *str - 32;
		   }
		   *str++;
	  }

	  
	  return;
}

int main()
{
	  char arr[20]; 

      printf("\n Enter string convert Lower into upper case =>");  
	  scanf("%[^’\n’]s",arr); 

       struprx(arr); 

	  printf("\n\n ===================lower to Upper case================= \n");

	  printf("\n Modified string Lower case into Upper case is => %s.",arr); 

	  printf("\n\n ===================lower to Upper case================= \n");

      return 0; 
}