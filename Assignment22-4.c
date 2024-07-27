#include<stdio.h>
#include<malloc.h>

void Maximum(int Arr[],int iLen)
{
    int i = 0, Temp = 0, iCnt = 0;

    for(i=0;i<iLen;i++)
    {
       Temp = Arr[i];
       while(Temp>0)
       {
        iCnt++;
        Temp/=10;
       }
       (iCnt!=3)?iCnt=0:printf("%d ",Arr[i]),iCnt=0;
        
    }

}
int main()
{
    int iNo=0,i=0, iRet = 0;
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
     
        Maximum(p,iNo);
    
    }
    free(p);
    return 0;

}