#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    int res = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++ )
    {
        res = iCnt * iNo;
        printf("%d\t ",res);
    }

}

int main()
{
    int iValue = 0;
   
     printf("Enter number : ");
     scanf("%d",&iValue);

     Table(iValue);
     
    return 0;
}