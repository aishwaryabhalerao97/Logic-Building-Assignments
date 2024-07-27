#include<stdio.h>
    void DisplayVowel(char CValue)
    {
        if(CValue =='a' || CValue =='e' || CValue =='i'|| CValue == 'o' || 
           CValue == 'u' )
        {
            printf(" True",CValue);
        }
        else
        {
             
            printf(" False",CValue);
        }
    }
    int main()
{
    char cValue = '\0';
    printf("Enter character : \n");
    scanf("%c",&cValue);
   DisplayVowel(cValue);

    return 0;
}