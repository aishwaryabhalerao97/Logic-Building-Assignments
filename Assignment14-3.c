#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0', cv = '\0';

     for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
    {
       for(i = 1,cv = 'A'; i <= iRow; i++,cv++)
       {
        printf("%c\t",ch);
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