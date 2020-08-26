#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double c,f,t;
    cout<<"Type 1 to convert Fahrenheit to Celsius,\n     2 to convert Celsius to Fahrenheit: ";
    cin>>t;
    if(t==1)
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>f;
        cout<<"In Celsius that's "<<((f-32)/9)*5<<endl;
    }
    else if(t==2)
    {
        cout<<"Enter temperature in Celsius: ";
        cin>>c;
        cout<<"In Fahrenheit that's "<<((c/5)*9)+32<<endl;
    }
    return 0;
}
