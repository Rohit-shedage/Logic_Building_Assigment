///////////////////////////////////////////////////////////////////////////////////////////////////
/// 1.Write a program which accept string from user and count number of capital characters. 
/// Input :   “Marvellous Multi OS” 
/// Output :   4 
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *src)
{
	 int iCnt = 0;

	 while(*src != '\0')
	 {
		   if(*src >= 65 && *src <= 90)
		   {
			    iCnt++;
		   }
		   *src++;
	 }

	 return iCnt;
}

int main()
{
	   char  arr[30] = "";
	   int iRet = 0;

	   printf("\n Enter a String to Count Capital Character =>");
	   scanf("%[^\n]",&arr);

	   iRet =  CountCapital(arr);

	   printf("\n\n ==================String Capital Character Count================== \n");

	   printf("\n Given String Capital Character Count is =>%d.",iRet);

	   printf("\n\n ==================String Capital Character Count================== \n");

	   return 0;
}