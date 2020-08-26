#include<iostream>
#include<cmath>
using namespace std;
class fraction
{
private:
    int num, den;
public:
    fraction():num(0),den(0)
    {    }
    fraction(int n, int d):num(n), den(d)
    {    }
    void get_frac();
    void lowterms();
    void display();
    fraction operator + (fraction);
    fraction operator - (fraction);
    fraction operator * (fraction);
    fraction operator / (fraction);
};
void fraction::get_frac()
{
    char ch;
    cin >> num >> ch >> den;
}
void fraction::display()
{
    cout<<num<<" / "<<den;
}
void fraction::lowterms()
{
    long tnum, tden, temp, gcd;
    tnum = labs(num);
    tden = labs(den);
    if (tden == 0)
    {
        cout << "Illegal fraction : division by 0";
        exit(1);
    }
    else if (tnum == 0)
    {
        num = 0;
        den = 1;
        return;
    }
    while (tnum != 0)
    {
        if (tnum < tden)
        {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }
        tnum = tnum - tden;
    }
    gcd = tden;
    num = num / gcd;
    den = den / gcd;
}
fraction fraction::operator + (fraction f)
{
    int num1 = num*f.den + den*f.num;
    int den1 = den*f.den;
    lowterms();
    return fraction(num1,den1);
}
fraction fraction::operator - (fraction f)
{
    int num1 = num*f.den - den*f.num;
    int den1 = den*f.den;
    lowterms();
    return fraction(num1,den1);
}
fraction fraction::operator * (fraction f)
{
    int num1 = num*f.num;
    int den1 = den*f.den;
    lowterms();
    return fraction(num1,den1);
}
fraction fraction::operator / (fraction f)
{
    int num1 = num*f.den;
    int den1 = den*f.num;
    lowterms();
    return fraction(num1,den1);
}
int main()
{
    fraction a,b,c,d,e,f;
    char t;
    cout<<"Enter the first fraction: ";
    a.get_frac();
    cout<<"Enter an operator(+, -, *, /): ";
    cin>>t;
    cout<<"Enter the second fraction: ";
    b.get_frac();
    switch(t)
    {
    case '+':
        c=a+b;
        cout<<"Addition: ";
        a.display();
        cout<<" + ";
        b.display();
        cout<<" = ";
        c.display();
        cout<<endl;
        break;
    case '-':
        d=a-b;
        cout<<"Subtraction: ";
        a.display();
        cout<<" - ";
        b.display();
        cout<<" = ";
        d.display();
        cout<<endl;
        break;
    case '*':
        e=a*b;
        cout<<"Multiplication: ";
        a.display();
        cout<<" * ";
        b.display();
        cout<<" = ";
        e.display();
        cout<<endl;
        break;
    case '/':
        f=a/b;
        cout<<"Division: ";
        a.display();
        cout<<" / ";
        b.display();
        cout<<" = ";
        f.display();
        cout<<endl;
        break;
    }
    return 0;
}
