#include<stdio.h>

void StrRevCpy(char *src, char *dest)
{
    int iCnt = 0;
    while(*src != '\0')
    {
          src++;
          iCnt++;
    }
      src--;
     
       while(iCnt > 0)
        {
             *dest=*src;
             dest++;
             src--;
             iCnt--;
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

     StrRevCpy(arr,brr);
    printf("%s String is :",brr);
    return 0;
}