#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[30];
    char Data[30] = "Hello world";

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
  lseek(fd,0,2);

write(fd,Data,11);
   close(fd);
    return 0;
}