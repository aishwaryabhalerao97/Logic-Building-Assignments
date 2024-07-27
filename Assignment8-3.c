#include<stdio.h>

int KMtoMeter( int iNo)
{
    int i = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        iNo = iNo * 1000;
        printf(" %d\n",iNo);
    }
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    printf(" Meter value is :",iRet);

    iRet = KMtoMeter(iValue);
    
     return 0;
}
