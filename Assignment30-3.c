#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool StrCmpX(char *str, char *dest, int iCnt) 
{

    while((*str != '\0') && (*dest != '\0') && (iCnt != '\0'))
    {
        str++;
        dest++;
        iCnt--;
    }

    if( *str == *dest || *dest == *str)
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
    bool bret = TRUE;
    char arr[50];
    char brr[30];
    int i = 0;

    printf("Enter first string : ");
    scanf("%[^\n]s",arr);

    printf("Enter second string : ");
    scanf(" %[^\n]s",brr);

    printf("Enter parameter : ");
    scanf(" %d",&i);

    bret = StrCmpX(arr,brr,i);

    if(bret == TRUE)
    {
        printf("Both strings are equal ");
    }
    else
    {
        printf("Both strings are not equal ");
    }
    return 0;
}