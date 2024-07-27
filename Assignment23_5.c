#include<stdio.h>


void DisplaySchedule(char chDiv)
{
if(chDiv == 'a' || chDiv == 'A') 
{
    printf("Your Exam is at 7 am");
}
else if(chDiv == 'b' || chDiv == 'B') 
{
    printf("Your Exam is at 8:30 am");
}
else if(chDiv == 'c' || chDiv == 'C') 
{
    printf("Your Exam is at 9:20 am");
}
else if(chDiv == 'd' || chDiv == 'D') 
{
    printf("Your Exam is at 10:30 am");
}
}
int main()
{
    int cValue = '\0';
    
    printf("Enter the string \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
