#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0 ;
     
    for(i = 1; i <= iRow ; i++)
    {
       for(j = iCol; j >= 1; j--)
        {
        
        if((i == 1) || (i == iRow) || (j == iCol) || (j == 1) || (i == j))
        {
            printf("*\t");
        }
        else if(i > j)
        {
             printf("$\t");
                }
         else
         {
            printf("#\t");
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