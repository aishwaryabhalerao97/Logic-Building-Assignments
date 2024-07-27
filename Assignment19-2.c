#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0, iEven = 0, iOdd = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 5==0)
        {
            printf("%d ",Arr[i]);
        }    
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memeory ");
        return -1;
    }
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
    printf("\nEnter element %d: ",iCnt+1);
    scanf("%d ",&p[iCnt]);
}
Display(p,iSize);
free(p);
return 0;
}