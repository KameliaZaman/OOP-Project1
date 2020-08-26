#include<iostream>
#include<iomanip>
using namespace std;
struct fraction
{
    float numerator;
    float denominator;
};
fraction fadd(fraction a1, fraction b1);
fraction fsub(fraction a2, fraction b2);
fraction fmul(fraction a3, fraction b3);
fraction fdiv(fraction a4, fraction b4);
void Display(fraction x);
int main()
{
    fraction f1,f2,add,sub,mul,div;
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
        add=fadd(f1,f2);
        cout<<"Addition: "<<f1.numerator<<"/"<<f1.denominator<<" + "<<f2.numerator<<"/"<<f2.denominator<<" = ";
        Display(add);
        break;
    case '-':
        sub=fsub(f1,f2);
        cout<<"Subtraction: "<<f1.numerator<<"/"<<f1.denominator<<" - "<<f2.numerator<<"/"<<f2.denominator<<" = ";
        Display(sub);
        break;
    case '*':
        mul=fmul(f1,f2);
        cout<<"Multiplication: "<<f1.numerator<<"/"<<f1.denominator<<" * "<<f2.numerator<<"/"<<f2.denominator<<" = ";
        Display(mul);
        break;
    case '/':
        div=fdiv(f1,f2);
        cout<<"Division: "<<f1.numerator<<"/"<<f1.denominator<<" / "<<f2.numerator<<"/"<<f2.denominator<<" = ";
        Display(div);
        break;
    }
    cout <<endl;
    return 0;
}
fraction fadd(fraction a1,fraction b1)
{
    fraction add1;
    add1.numerator=a1.numerator*b1.denominator+a1.denominator*b1.numerator;
    add1.denominator=a1.denominator*b1.denominator;
    return add1;
}
fraction fsub(fraction a2,fraction b2)
{
    fraction sub1;
    sub1.numerator=a2.numerator*b2.denominator-a2.denominator*b2.numerator;
    sub1.denominator=a2.denominator*b2.denominator;
    return sub1;
}
fraction fmul(fraction a3,fraction b3)
{
    fraction mul1;
    mul1.numerator=a3.numerator*b3.numerator;
    mul1.denominator=a3.denominator*b3.denominator;
    return mul1;
}
fraction fdiv(fraction a4,fraction b4)
{
    fraction div1;
    div1.numerator=a4.numerator*b4.denominator;
    div1.denominator=a4.denominator*b4.numerator;
    return div1;
}
void Display(fraction x)
{
    cout<<x.numerator/x.denominator<<endl;
}
