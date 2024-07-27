#include<stdio.h>

#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void Display(char Fname[], int iNo)
{
    int fd = 0, iRet = 0;
    char Buffer[10] ;

      fd = open(Fname,O_RDONLY);
      lseek(fd,0,0);

       if(fd == -1)
    {
        printf("Unable to create file\n");
        return;
    }
    else
    {
        printf("File opened successfully\n\n");
    }
    iRet = read(fd,Buffer,iNo);
    write(1,Buffer,iRet);
}
int main()
{
    char FileName[30];
    int iValue = 0;
    printf("Enter file name\n");
    scanf("%s",&FileName);

   printf("Enter how many character to display :\n");
   scanf("%d",&iValue);
    
   // printf("Data is : %s\n",FileName);
    Display(FileName,iValue);
   
    return 0;
}