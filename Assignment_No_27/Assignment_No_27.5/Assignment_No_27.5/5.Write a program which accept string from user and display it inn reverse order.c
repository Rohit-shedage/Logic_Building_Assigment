///////////////////////////////////////////////////////////////////////////////////////////////////
/// 3. Write a program which accept string from user and display it inn reverse order. 
/// Input :   “MarvellouS” 
/// Output :   “SuollevraM” 
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int StrLenght(char *str)
{
	 int iCnt = 0;

	 while(str[iCnt] != '\0')
	 {
		  iCnt++;
		  
	 }
	 return iCnt;
}

void Reverse(char *src,char *Dest)
{
	 
	 int ilen = StrLenght(src);

	 src = src + (ilen - 1);

	 while(ilen > 0)
	 {
		   *Dest = *src;
		   *Dest++;		   
		   *src--;
		   ilen--;
	 }

	 *Dest = '\0';

}

int main()
{
	   char  arr[30] = "";
	   char Dest[30] = "";
	  
	   printf("\n Enter a String to Count Capital Character =>");
	   scanf("%[^\n]",&arr);

	   Reverse(arr,Dest);

	   printf("\n\n ==========================Reverse String========================== \n");

	   printf("\n Given String \"%s\" Reverse is => %s.",arr,Dest);
 

	   printf("\n\n ====================Reverse String================================= \n");
	   return 0;
}