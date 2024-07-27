#include<stdio.h>
int OddDisplay(int iNo)
{
    
    int i = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i =1; i<= iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    printf("Odd numbers are:\n");
    OddDisplay(iValue);

    return 0;
}

