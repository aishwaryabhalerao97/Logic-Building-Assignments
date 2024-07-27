#include<stdio.h>

void StrCatX(char *str, char *dest, int iCnt)
{
    while(*str != '\0')
    {
        str++;
    }
    *str = ' ';
    str++;
    while((*dest != '\0') && (iCnt != 0))
    {
        *str = *dest;
        dest++;
        str++;
        iCnt--;
    }
    *dest = '\0';
    return;
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    int i = 5;

    printf("Enter first string :");
    scanf("%[^\n]s",arr);

     printf("Enter second string :");
    scanf(" %[^\n]s",brr);
    
     printf("Enter parameter string :");
    scanf("%d",&i);
    
    StrCatX(arr,brr,i);

    printf("%s \n",arr);

    return 0;
}