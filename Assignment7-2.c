#include<stdio.h>

int DollarToINR(int iNo)
{
   // int iCnt;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    else
    {
        iNo = iNo * 70;
        printf("%d \n",iNo);
    }
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD :");
    scanf("%d",&iValue);
    printf("Value in INR id %d",iRet);
    iRet = DollarToINR(iValue);
    
    return 0;
}