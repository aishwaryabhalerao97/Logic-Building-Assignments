#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkDigit(char ch)
{
if(ch >= 'a' && ch <= 'z')
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
        printf("String is small!");
    }
    else
    {
        printf("String is not small!");
    }

    return 0;
}
