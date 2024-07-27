#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int result = 0;
    iCnt = 1;
    while( iCnt <= iNo )
       {
         
        if(iCnt % 2!=0)
        {
           result *= iCnt;
          printf("%d\t",iCnt,result);
       }
        iCnt++;
       }
       return result;
    
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);
      printf("Odd Factorial of number is %d:",iRet);
    iRet = OddFactorial(iValue);

  
    return 0;
}