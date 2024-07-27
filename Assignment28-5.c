#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src != '\0')
    {
          src++;
    }
      *src = ' ';
      src++;
       while(*dest != '\0')
        {
             *dest=*src;
            dest++;
             src++;
        }
       
    *src = '\0';
    return;
}
int main()
{
    char arr[60] = "\0";
    char brr[30] = "\0";

    printf("Enter source string : ");
     scanf("%[^\n]s",arr);

    printf("Enter Destination string : ");
    scanf("%[^\n]s",brr);

    StrCatX(arr,brr);
    printf("%s String is :",arr);
    return 0;
}