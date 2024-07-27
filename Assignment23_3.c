#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkDigit(char ch)
{
if(ch >= '0' && ch <= '9')
{
    return TRUE;
}
else
{
    return FALSE;
}
}
int main()
{
    int cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the string \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("String is Digit!");
    }
    else
    {
        printf("String is not digit!");
    }

    return 0;
}
