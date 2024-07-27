#include<stdio.h>

void StrCpyX(char *src, char *dest, int iCnt)
{
    while(*src != '\0' && iCnt > 0)
    {
        *dest = *src;
        
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
    return;
}
int main()
{
    char arr[30] ="\0";
    char brr[30] ="\0";
    int iSize = 0;

    printf("Enter source string : \n");
    scanf("%[^\n]s",arr);

     printf("Enter size string : \n");
    scanf("%d",&iSize);

    StrCpyX(arr,brr,iSize);
    printf("Destination String is : %s",brr);
    return 0;
}