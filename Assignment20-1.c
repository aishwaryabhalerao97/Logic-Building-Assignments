#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
    int i = 0, iEven = 0, iDigit = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2==0)
        {
            iDigit++;
        }    
    }
    return iDigit;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
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
iRet = Display(p,iSize);
printf("Frequency of even number is %d",iRet);
free(p);
return 0;
}