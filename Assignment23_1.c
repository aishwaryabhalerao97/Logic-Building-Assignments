#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkAlpha(char ch)
{
if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("String is character!");
    }
    else
    {
        printf("String is not character!");
    }

    return 0;
}