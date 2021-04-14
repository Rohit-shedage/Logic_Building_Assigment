/*
4. Write a program which accept temperature in Fahrenheit and convert it into celsius.
 (1 celsius = (Fahrenheit -32) * (5/9))
*/
#include<stdio.h>
#include<conio.h>
double FhtoCs(float fNo)
{
      return ((fNo-32)*(5%9));
}

int main()
{
         float fValue = 0.0;
         double dRet = 0.0;
       printf("Enter temperature in Fahrenheit =>");
        scanf("%f",&fValue);

        dRet = FhtoCs(fValue);
        printf("\n Given  temperature in Fahrenheit %0.f into celsius is=> %0.4lf.",fValue,dRet);

        getch();
        return 0;
}
