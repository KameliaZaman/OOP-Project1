#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    char ch,t;
    cout<<"Enter first number, operator, second number: ";
    while(cin>>a>>ch>>b)
    {
        switch(ch)
        {
        case '+':
            cout<<"Answer = "<<a+b<<endl;
            break;
        case '-':
            cout<<"Answer = "<<a-b<<endl;
            break;
        case '*':
            cout<<"Answer = "<<a*b<<endl;
            break;
        case '/':
            cout<<"Answer = "<<a/b<<endl;
            break;
        }
        cout<<"Do another (y/n)? ";
        cin>>t;
        switch(t)
        {
        case 'y':
             cout<<"Enter first number, operator, second number: ";
            continue;
            break;
        case 'n':
            return 0;
            break;
        }
    }
    return 0;
}
