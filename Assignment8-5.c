#include<stdio.h>

double SquareMeter(int iValue)
{
    int iCnt = 0;
    double Sqm = 0;

    for(iCnt = iValue;iCnt <= iValue;iCnt++)
{
    Sqm = iValue * 0.0929;
    printf("%d %f ",iValue,Sqm);
}
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);
     printf("Metre value is:",dRet);
    dRet = SquareMeter(iValue);
   

    return 0;
}