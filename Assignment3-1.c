#include<stdio.h>

void PrintEven( int iNo)
{
    
    int iCnt = 0;
    if(iNo <=0)
    {
        return;
    }
    iCnt = 1;
    while( iCnt <= 2*iNo)
    {
        if(iCnt % 2 ==0)
        {
          
            printf("%d \t",iCnt);
        }
        iCnt ++;
    }
}
int main()
{
    int iValue = 0;

    printf(" enter number: \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}