///////////////////////////////////////////////////////////////////////////////////////////////////
/// 3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
/// Input :   “MarvellouS” 
/// Output :   6 (8-2) 
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int  Difference(char *src)
{
	 int Ccnt = 0,Scnt = 0; // Capital Cnt and Small Cnt

	 while(*src != '\0')
	 {
		   if(*src >= 65 && *src <= 90)
		   {
			    Ccnt++;
		   }
		   else if(*src >= 97 && *src <= 122)
		   {
			    Scnt++;
		   } 
		   *src++;
	 }

	 return  Scnt - Ccnt;
}

int main()
{
	   char  arr[30] = "";
	   int iRet = 0;

	   printf("\n Enter a String difference between frequency of small and capital characters =>");
	   scanf("%[^\n]",&arr);

	   iRet =   Difference(arr);

	   printf("\n\n ====================frequency of small and capital characters ================================ \n");

	   printf("\n Given String difference between frequency of small and capital characters is =>%d.",iRet);

	   printf("\n\n =====================frequency of small and capital characters ================================ \n");

	   return 0;
}