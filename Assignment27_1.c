#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str==ch)
        {
            iCnt++;
            break;
        }
        str++;
    }
    if(iCnt==1)
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
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^'\n']s",&cValue);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);
    if(bRet==true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }
    return 0;
}