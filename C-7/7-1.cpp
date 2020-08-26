#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void reversit(char *);
int main()
{
    char ara[100];
    cout<<"Enter a string to reverse: ";
    gets(ara);
    reversit(ara);
    cout<<"Reverse: "<<ara<<endl;
    return 0;
}
void reversit(char *str)
{
    char temp;
    int i,len;
    len=strlen(str)-1;
    for(i=0; i<len; i++,len--)
    {
        temp=str[i];
        str[i]=str[len];
        str[len]=temp;
    }
}
