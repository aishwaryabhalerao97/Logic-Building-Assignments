
#include<iostream>
using namespace std;

template<class T>
T CountFrequency(T *str, char ch)   
{
    int iCnt = 0;

    while(*str != '\0')
    {   
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    cout<<"Enter string : \n";
    cin>>Arr;
    
    cout<<"Enter the character that you want to search : \n";
    cin>>cValue;

    iRet = CountFrequency(Arr, cValue);
  
    cout<<"Frequency is %d\n"<<iRet;

    return 0;
}