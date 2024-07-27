#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int fact = 0;
    iCnt = 1;
    while( iCnt <= iNo )
       {
         fact = fact * iCnt;
        if(iCnt % 2==0)
        {
           
          printf("%d\t",iCnt,fact);
       }
        iCnt++;
       }
    
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);
      printf("Even Factorial of number is :",iRet);
    iRet = EvenFactorial(iValue);

  
    return 0;
}