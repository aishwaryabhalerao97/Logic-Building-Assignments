#include<stdio.h>

void StrCapCpy(char *src, char *dest)
{
    int iCnt = 0;
    while(*src != '\0')
    {
        if(*src >='A' && *src <='Z')
        {
             *dest=*src + 32;
             dest++;
             src++;
             continue;
            
        }
        else if(*src >='a' && *src <='z')
       {
        *dest = *src-32;
        dest++;
        src++;
        continue;
       }
        *dest = *src;
        dest++;
        src++;
    } 
    *dest = '\0';
    return;
}
int main()
{
    char arr[60] = "\0";
    char brr[30] = "\0";

    printf("Enter source string : ");
     scanf("%[^\n]s",arr);

     StrCapCpy(arr,brr);
    printf("%s String is :",brr);
    return 0;
}