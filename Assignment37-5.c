#include<stdio.h>

bool CheckBit(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0x80000001;
iResult = iNo & iMask;

if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    bool iRet = 0;
    unsigned int iValue =0; 
    
    printf("Enter number : \n");
    scanf("%u",&iValue);
iRet = CheckBit(iValue);
    if(iRet == true)
    {
        printf("first and last bit is ON \n");
    }
    else
    {
         printf("Bits are OFF \n");
    }
    return 0;
}