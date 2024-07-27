#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fahr = 0;
    int i = 0;
    if(fTemp<0)
    {
       fTemp = -fTemp;
    }
    for(i = 1; i <= fTemp; i++)
    {
       fahr = ((fTemp * 5/9) + 32);
        printf("%lf\n",fahr);
    }
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%d",&fValue);

   
    dRet = FhtoCs(fValue);
     printf("Fahrenheit is: ",dRet);
    return 0;
}