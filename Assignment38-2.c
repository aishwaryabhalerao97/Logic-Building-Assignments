#include<stdio.h>

int main()
{
    unsigned int iResult = 0;
    unsigned int iNo = 0;
    unsigned int iMask = 0xfffff00f;

    printf("Enter number : \n");
    scanf("%u",&iNo);
    iResult = iNo & iMask;
    
    printf("updated number is:%u \n",iResult);
  
    return 0;
}


