#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkSpecial(char ch)
{
if(ch >= 33 && ch <= 42)
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
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("String is Special character!");
    }
    else
    {
        printf("String is not Special character!");
    }

    return 0;
}
