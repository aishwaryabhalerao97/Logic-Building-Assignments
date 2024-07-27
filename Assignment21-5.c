#include<stdio.h>
#include<malloc.h>

int FindNo(int Arr[],int iLen)
{
    int i=0,iCnt = 0;

    for(i=0;i<iLen;i++)
    {
        if(Arr[i] % 2 != 0)
        {
             (iCnt==0)?iCnt++:iCnt;
             iCnt*=Arr[i];
        }
    }
return iCnt;
}
int main()
{
    int iNo=0,i=0,iRet = 0;
    int *p = NULL;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iNo);

    p=(int *)malloc(iNo*(sizeof(int)));

    if(p==NULL)
    {
        printf("Failed To Allocate Memory !!!");
        return -1;
    }
    else
    {
        printf("Enter The Elements\n");
        for(i=0;i<iNo;i++)
        {
            printf("\nEnter The Element %d => ",i+1);
            scanf("%d",&p[i]);
        }
       iRet = FindNo(p,iNo);  
       printf("Product is %d ",iRet);
    }
    free(p);
    return 0;

}