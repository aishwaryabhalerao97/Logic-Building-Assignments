#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[30];

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
   iRet = lseek(fd,0,2);

   printf("Size of file is : %d\n",iRet);
   close(fd);
    return 0;
}