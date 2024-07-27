#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
             *dest = *src ;
            dest++;
        }
        src++;
    }
    dest = '\0';
}
int main()
{
    char arr[30] = "\0";
    char brr[30] = "\0";
    printf("Enter source string : \n");
    scanf("%[^\n]s",arr);

    StrCpyCap(arr,brr);
    printf("%s ",brr);
    return 0;
}