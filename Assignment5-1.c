#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
             printf("$\t");
            printf("*\t");
      
       
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}