#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d;
    char t;
    cout<<"Enter the first fraction: ";
    cin>>a>>b;
    cout<<"Enter an operator(+, -, *, /): ";
    cin>>t;
    cout<<"Enter the second fraction: ";
    cin>>c>>d;
    switch(t)
    {
    case '+':
        cout<<"Addition: "<<a<<"/"<<b<<" + "<<c<<"/"<<d <<" = "<<((a*d+b*c)/(b*d))<<endl;
        break;
    case '-':
        cout<<"Subtraction: "<<a<<"/"<<b<<" - "<<c<<"/"<<d <<" = "<<((a*d-b*c)/(b*d))<<endl;
        break;
    case '*':
        cout<<"Multiplication: "<<a<<"/"<<b<<" * "<<c<<"/"<<d<<" = "<<((a*c)/(b*d))<<endl;
        break;
    case '/':
        cout<<"Division: "<<a<<"/"<<b<<" / "<<c<<"/"<<d <<" = "<<((a*d)/(b*c))<<endl;
        break;
    }
    return 0;
}
