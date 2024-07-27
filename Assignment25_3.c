#include<stdio.h>

int Differnce(char *str)
{
    int iCnt = 0,iCnt1 = 0;
    if(*str < 0 )
    {
        *str = -*str;
       
    }
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'z')
        {
            iCnt++;
        }
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt1++;
        }
        str++;
    }
    return iCnt1-iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = Differnce(arr);
    printf("%d",iRet);

    return 0;

}