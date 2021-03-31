#include<stdio.h>
#include<conio.h>
int main()
{
      char Name[30];


      printf("\n Enter Your Name =>");
      //scanf("%s",Name);   //it   takes only First Word like  Piyush Khairnar   Output => Piyush
      //scanf("%[^\n]",Name); // it Take Whole String That you Entered it work Like % Not Equal to \n Means Enter
      gets(Name); //Works same Like Whole String

      printf("\n Your Name is =>%s.",Name);
}
