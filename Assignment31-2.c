#include<stdio.h>
 #include<stdlib.h>
int WordCount(char* str)
{
    int iMax = 0, i = 0;

    if(str==NULL)
    {
        printf("Empty String !");
        exit(1);
    }
    while(*str != '\0')
    {
        i=0;
        if(*str == ' ')
        {
            str++;
            continue;
        }
        while(*str != ' ' && *str != '\0')
        {
            str++;
            i++;
        }
       
        iMax=(iMax<i)?i:iMax;
            str++;
        }
    
    return iMax;
}
int main()
{
    char str[30]="\0";

    printf("Enter The String => ");
    scanf(" %[^\n]s",str);

    printf("%d",WordCount(str));

    return 0;
}