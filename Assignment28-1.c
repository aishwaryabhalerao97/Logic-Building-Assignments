#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] ="Marvelleous Multi OS";
    char brr[30];

    StrCpyX(arr,brr);

    printf(" String is : %s",brr);
    return 0;
}