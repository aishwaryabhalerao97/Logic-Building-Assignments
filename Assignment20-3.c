#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define False 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{ 
    //BOOL bFlag = FALSE; 
    int i = 0;
    for(i = 0; i <= iLength; i++)
    {
        if(Arr[i]==11)
        {
        return 1;
    
        }
        
    }
    return 0;
}
int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;
    bool bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d ",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memmory");
        return -1;
    }
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("\n Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present ");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);
    return 0;

}
