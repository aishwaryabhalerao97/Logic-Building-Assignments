#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool StrCmpX(char *str, char *dest) 
{

    while((*str != '\0') && (*dest != '\0'))
    {
        str++;
        dest++;
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

    printf("Enter first string : ");
    scanf("%[^\n]s",arr);

    printf("Enter second string : ");
    scanf(" %[^\n]s",brr);

    bret = StrCmpX(arr,brr);

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