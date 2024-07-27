#include<stdio.h>


int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str==ch)
        {
            iCnt++;
           
        }
        str++;
    }
   return iCnt;
}
int main()
{
    char arr[20];
    char cValue;
 int iRet =0;

    printf("Enter String\n");
    scanf(" %[^'\n']s",arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);
    printf("Character Frequency is : %d\n",iRet);

    return 0;
}