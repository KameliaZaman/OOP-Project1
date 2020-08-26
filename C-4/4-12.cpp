#include<iostream>
#include<iomanip>
using namespace std;
struct fraction
{
    float numerator,denominator;
};
int main()
{
    fraction f1,f2;
    char t;
    cout<<"Enter first fraction: ";
    cin>>f1.numerator>>f1.denominator;
    cout<<"Enter an operator(+, -, *, /): ";
    cin>>t;
    cout<<"Enter second fraction: ";
    cin>>f2.numerator>>f2.denominator;
    switch(t)
    {
    case '+':
        cout<<"Addition: "<<f1.numerator<<"/"<<f1.denominator<<" + "<<f2.numerator<<"/"<<f2.denominator<<" = "<<((f1.numerator*f2.denominator+f1.denominator*f2.numerator)/(f1.denominator*f2.denominator))<<endl;
        break;
    case '-':
        cout<<"Subtraction: "<<f1.numerator<<"/"<<f1.denominator<<" - "<<f2.numerator<<"/"<<f2.denominator<<" = "<<((f1.numerator*f2.denominator-f1.denominator*f2.numerator)/(f1.denominator*f2.denominator))<<endl;
        break;
    case '*':
        cout<<"Multiplication: "<<f1.numerator<<"/"<<f1.denominator<<" * "<<f2.numerator<<"/"<<f2.denominator<<" = "<<((f1.numerator*f2.numerator)/(f1.denominator*f2.denominator))<<endl;
        break;
    case '/':
        cout<<"Division: "<<f1.numerator<<"/"<<f1.denominator<<" / "<<f2.numerator<<"/"<<f2.denominator<<" = "<<((f1.numerator*f2.denominator)/(f1.denominator*f2.numerator))<<endl;
        break;
    }
    return 0;
}
