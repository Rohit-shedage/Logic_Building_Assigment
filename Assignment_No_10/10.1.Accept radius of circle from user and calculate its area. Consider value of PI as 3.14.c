/*
1.Write a program which accept radius of circle from user and calculate its area.
 Consider value of PI as 3.14. (Area = PI * Radius * Radius)
*/
#include<stdio.h>
#include<conio.h>
double CircleArea(float fRadius)
{
        float PI = 3.14;
        double dArea = 0.2;

        return dArea = PI*fRadius*fRadius;
}
int main()
{
          float fValue = 0.0;
          double dRet = 0.2;

          printf("\n Enter a Radius of Circle =>");
          scanf("%f",&fValue);

          dRet = CircleArea(fValue);
          printf("\n Area of Circle is =>%lf",dRet);
}
