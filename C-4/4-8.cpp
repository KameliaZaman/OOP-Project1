#include<iostream>
#include<iomanip>
using namespace std;
struct fraction
{
    int numerator,denominator;
    char ch;
};
int main()
{
    fraction f1,f2;
    cout<<"Enter first fraction: ";
    cin>>f1.numerator>>f1.ch>>f1.denominator;
    cout<<"Enter second fraction: ";
    cin>>f2.numerator>>f2.ch>>f2.denominator;
    cout<<"Addition: "<<f1.numerator*f2.denominator+f2.numerator*f1.denominator<<"/"<<f1.denominator*f2.denominator<<endl;
    return 0;
}
