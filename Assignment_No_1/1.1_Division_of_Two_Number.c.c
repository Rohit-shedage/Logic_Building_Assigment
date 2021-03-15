#include<stdio.h>
#include<conio.h>
int Divide(int iNum1,int iNum2)
{
      int iAns = 0;

      if(iNum2 <= 0)
      {
            return ;
      }

      iAns = iNum1 / iNum2;
      return iAns;
}
int main()
{
    int iNo1 = 0, iNo2 = 0,iRet = 0;

    printf("\n Enter a Two Number To Make Division =>");
    scanf("%d%d",&iNo1,&iNo2);

    iRet = Divide(iNo1,iNo2);

    printf("\n Division of Two Number are => %d.",iRet);


    getch();
    return 0;
}
