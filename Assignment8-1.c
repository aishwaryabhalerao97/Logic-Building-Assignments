#include<stdio.h>

double CircleArea(float fRadius)
{
    float Area = 0;
   double PI = 3.14;
    //int i;

    if(fRadius<0)
    {
        fRadius = -fRadius;
    }
   
    for(Area = 1; Area <= fRadius; Area++)
    {
        Area = PI * fRadius * fRadius;
        printf("%f\n",Area);
       
    }
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf(" Enter radius :");
    scanf("%f",&fValue);

    printf(" Area of Circle is : ",dRet);
    dRet = CircleArea(fValue);

    return 0;
}