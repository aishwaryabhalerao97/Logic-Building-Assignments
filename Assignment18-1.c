#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0 ;

    for(j = 1; j <= iRow ; j++)
    {
        for(i = iCol; i >= 1; i--)
        {
        
        if(i == j)
        {
            printf("#\t");
        }
        else 
        {
            printf("*\t");
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