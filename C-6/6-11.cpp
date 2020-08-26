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
    void add_frac(fraction,fraction);
    void sub_frac(fraction,fraction);
    void mul_frac(fraction,fraction);
    void div_frac(fraction,fraction);
};
void fraction::get_frac()
{
    char ch;
    cin >> num >> ch >> den;
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
void fraction::add_frac(fraction a,fraction b)
{
    num = a.num*b.den + a.den*b.num;
    den = a.den*b.den;
    lowterms();
    cout << a.num << " / " << a.den<<" + "<<b.num<<" / "<<b.den<<" = "<<num<<" / "<<den<<endl;
}
void fraction::sub_frac(fraction a,fraction b)
{
    num = a.num*b.den - a.den*b.num;
    den = a.den*b.den;
    lowterms();
    cout << a.num << " / " << a.den<<" - "<<b.num<<" / "<<b.den<<" = "<<num<<" / "<<den<<endl;
}
void fraction::mul_frac(fraction a,fraction b)
{
    num = a.num*b.num;
    den = a.den*b.den;
    lowterms();
    cout << a.num << " / " << a.den<<" * "<<b.num<<" / "<<b.den<<" = "<<num<<" / "<<den<<endl;
}
void fraction::div_frac(fraction a, fraction b)
{
    num = a.num*b.den;
    den = a.den*b.num;
    lowterms();
    cout << a.num << " / " << a.den<<" / "<<b.num<<" / "<<b.den<<" = "<<num<<" / "<<den<<endl;
}
int main()
{
    fraction a, b, c,d,e,f;
    char t;
    cout << "Enter fraction A: ";
    a.get_frac();
    cout<<"Enter an operator(+, -, *, /): ";
    cin>>t;
    cout << "Enter fraction B: ";
    b.get_frac();
    switch(t)
    {
    case '+':
        c.add_frac(a, b);
        break;
    case '-':
        d.sub_frac(a, b);
        break;
    case '*':
        e.mul_frac(a, b);
        break;
    case '/':
        f.div_frac(a, b);
        break;
    }
    return 0;
}
