#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double Area;

    for(Area = 1; Area <= fWidth, Area<=fHeight;Area++)
    {
        Area = fWidth * fHeight;
        printf("%f\n",Area);
    }

}

int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    return 0;
}