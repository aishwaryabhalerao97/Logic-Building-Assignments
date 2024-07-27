#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool ChekVowel(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'O' || *str == 'U')
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
    bool bRet = false;

    printf("Enter String\n");
    scanf(" %[^'\n']s",arr);

    bRet = ChekVowel(arr);
    if(bRet==true)
    {
        printf("It contains vowels\n");
    }
    else
    {
         printf("It does not contains vowels\n");
    }
    return 0;
}