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
    void disp();
    void add_frac(fraction,fraction);
    void div_frac(fraction,fraction);
};
void fraction::get_frac()
{
    char ch;
    cin >> num >> ch >> den;
}
void fraction::disp()
{
    cout<<num<<" / "<<den<<endl;
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
void fraction::div_frac(fraction a, fraction b)
{
    num = a.num*b.den;
    den = a.den*b.num;
    lowterms();
    cout << a.num << " / " << a.den<<" / "<<b.num<<" / "<<b.den<<" = "<<num<<" / "<<den<<endl;
}
int main()
{
    fraction ara[100],sum,divisor,result;
    char ch;
    int i=0;
    do
    {
        cout << "Enter a fraction: ";
        ara[i].get_frac();
        i++;
        cout << "Enter again?(y/n):";
        cin>>ch;
    }
    while (ch == 'y'&& i < 100);
    sum = { 0, 1 };
    for (int j = 0; j < i; j++)
    {
        sum.add_frac(sum, ara[j]);
    }
    divisor = { 1, i + 1 };
    result.div_frac(sum, divisor);
    cout << "Average of entered fractions:";
    result.disp();
}

