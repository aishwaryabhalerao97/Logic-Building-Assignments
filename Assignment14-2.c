#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0', small = '\0';

    for(i = 1,ch = 'A',small = 'a'; i <= iRow; i++,ch++,small++)
    {
        for(j = 1,ch = 'A',small = 'a'; j <= iCol; j++,ch++,small++)
        {
            if(i % 2==0)
            {
            printf("%c\t",small);
            }
            else
            {
                 printf("%c\t",ch);
            }
        }
        printf("\n");
    }

    }
     
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of colmumns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}