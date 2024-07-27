#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0, iEven = 0, iOdd = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2==0)
        {
            iEven += Arr[i];
        }
        else
        {
            iOdd += Arr[i];
        }
    }
    return iEven-iOdd;

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
    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
    printf("\nEnter element %d: ",iCnt+1);
    scanf("%d ",&p[iCnt]);
}
iRet = Difference(p,iSize);
printf("\nResult is %d",iRet);

free(p);
return 0;
}