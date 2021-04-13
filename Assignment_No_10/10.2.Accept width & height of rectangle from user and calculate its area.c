/*
2. Write a program which accept width & height of rectangle from user and
 calculate its area. (Area = Width * Height)
*/
#include<stdio.h>
#include<conio.h>
double  RectArea(float fWidth,float fHeight)
{
        double dArea = 0.2;

        return dArea = fWidth*fHeight;
}
int main()
{
         float fValue1 = 0.0, fValue2 = 0.0;
         double dRet = 0.2;

          printf("\n Enter a Width of Rectangle =>");
          scanf("%f",&fValue1);
          printf("\n Enter a Height of Rectangle =>");
          scanf("%f",&fValue2);

          dRet =  RectArea(fValue1, fValue2);
          printf("\n Area of Rectangle is =>%lf",dRet);

          getch();
          return 0;
}
