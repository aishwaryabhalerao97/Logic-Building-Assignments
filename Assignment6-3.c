#include<stdio.h>

int Factorial(int num)
{
    int i = 0;
    int fact = 1;
    if(num<0)
    {
        num = -num;
    }
    for(i = 1; i <= num; i++ )
       {
         fact = fact * i;
          printf("%d \n",fact);
       }
    
    }
int main()
{ 
    int iValue = 0;;
    int iRet = 0;
    
    printf("Enter Number: ");
    scanf("%d",&iValue);

     printf("Factorial of number is : \n ",iRet );

    iRet = Factorial(iValue);
    return 0;
}