#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
using namespace std;
long mstold(char str[])
{
    string s=" 0123456789";
    char str1[20];
    for(int i=0, j=0; i<strlen(str); i++)
        if(s.find(str[i])<20)
            str1[j++]=str[i];
    return atol(str1);
}
int main()
{
    char ara[20];
    do
    {
        cout<<"Enter a monetary value: ";
        cin>>ara;
        cout<<mstold(ara)<<endl;
        cout<<"Press y to continue"<<endl;
    }
    while(getch()=='y');
    return 0;
}
