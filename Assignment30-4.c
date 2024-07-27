#include<stdio.h>

void StrRevTogX(char *str)
{
    char temp;
    char *first, *last;
    first = str;
    last = str;
    while(*last != '\0')
    {
        last++;
    }
    last--;
    while(first <= last)
    {
         temp=*str;
        *str=(*last>='A' && *last<='Z')?*last+32:(*last>='a' && *last<='z')?*last-32:*last;
        *last=(temp>='A' && temp<='Z')?temp+32:(temp>='a' && temp<='z')?temp-32:temp;
        last--;
        str++;   
    }
    
     *last = '\0';
     return;
}
int main()
{
    char Str[30] = "\0";
    char Dest[30] = "\0";

    printf("Enter the string :");
    scanf("%[^\n]s",Str);

    StrRevTogX(Dest);

    printf("%s",Dest);
    return 0;
}