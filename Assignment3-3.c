        
    #include<stdio.h>

void DisplayEvenFactor( int iNo)
{
    
    int i = 0;
    if(iNo <=0)
    {
        iNo=-iNo;
        return;
    }
    
    for( i = 1;i <=iNo; i ++)
    {
        if(iNo % i ==0 && i % 2 ==0)
        {
          
            printf("%d \t",i);
        }
       
    }
}
int main()
{
    int iValue = 0;

    printf(" enter number: \n");
    scanf("%d",&iValue);

   DisplayEvenFactor(iValue);
    return 0;
}