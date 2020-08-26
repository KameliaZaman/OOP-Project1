#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double p,s,pn;
    cout<<"Enter pounds: "; cin>>p;
    cout<<"Enter shillings: "; cin>>s;
    cout<<"Enter pence: "; cin>>pn;
    cout<<"Decimal pounds = \x9c"<<p+((s+(pn/12))/20)<<endl;
    return 0;
}
