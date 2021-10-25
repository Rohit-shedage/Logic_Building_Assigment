//////////////////////////////////////////////////////////////////////////////////////////////
/* 5. Accept division of student from user and depends on the division display exam timing. 
      There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, 
	  C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)  
*/
/// Input :  C 
/// Output :  Your exam at 9.20 AM 
/// Input :  d 
/// Output :  Your exam at 10.30 AM 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void DisplaySchedule(char chdiv)
{  
	   printf("\n\n ==============Exam Timing================================= \n");

	   switch(chdiv)
	   {
	          case 65:
			  case 97:
				      printf("\n Exam of division A at 7 AM ");
					  break;

			  case 66:
			  case 98:
				      printf("\n Exam of division B at 8.30 AM ");
					  break;

			  case 67:
			  case 99:
				      printf("\n Exam of division C at 9.20 AM ");
					  break;

			  case 68:
			  case 100:
				      printf("\n Exam of division D at 10.30 AM");
					  break;

			  default :
				       printf("\n Invalid Division");
					   break;
	   }

	   printf("\n\n ==============Exam Timing================================= \n");

	   return;
} 

int main() 
{  
	   char cValue = '\0';  
	    

	   printf("\n ======================================== \n");

       printf("\n Enter your division \'A'\ OR \'B'\ OR \'C'\ OR \'D'\ => "); 
	   //scanf("%c",&cValue);
	   cValue = getche();

	   

      DisplaySchedule(cValue); 

      
	   
	   return 0; 
}