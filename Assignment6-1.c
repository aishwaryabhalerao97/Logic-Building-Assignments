#include<stdio.h>
void Number(int iNo)
{
    int i = 0;
    for(i = iNo; i <= iNo; i++)
    {
        if(iNo<50)
        {
            printf("Small\n",i);
        }
        else if(iNo>50 && iNo<100)
        {
            printf("Medium\n",i);
        }
        else
        {
            printf("Large\n",i);

        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}