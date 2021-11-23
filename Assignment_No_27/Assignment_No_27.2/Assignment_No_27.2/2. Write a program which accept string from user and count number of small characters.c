///////////////////////////////////////////////////////////////////////////////////////////////////
/// 2. Write a program which accept string from user and count number of small characters. 
/// Input :   “Marvellous” 
/// Output :   9 
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
	 int iCnt = 0;

	 while(*str != '\0')
	 {
		   if(*str >= 97 && *str <= 122)
		   {
			    iCnt++;
		   }
		   *str++;
	 }

	 return iCnt;
}

int main()
{
	   char  arr[30] = "";
	   int iRet = 0;

	   printf("\n Enter a String to count number of small characters =>");
	   scanf("%[^\n]",&arr);

	   iRet =  CountSmall(arr);

	   printf("\n\n ==================String Small Character Count================== \n");

	   printf("\n Given String  count number of small characters is =>%d.",iRet);

	   printf("\n\n ==================String Small Character Count================== \n");

	   return 0;
}