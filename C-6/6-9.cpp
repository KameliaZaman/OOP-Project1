#include<iostream>
#include<iomanip>
using namespace std;
class fraction
{
private:
    int numerator,denominator;
    char ch;
public:
    fraction():numerator(0),denominator(0),ch(0)
    {    }
    fraction(int num, int denom, char c):numerator(num),denominator(denom),ch(c)
    {    }
    void get();
    void add(fraction, fraction);
    void display();
};
void fraction::get()
{
    cout<<"Enter fraction: ";
    cin>>numerator>>ch>>denominator;
}
void fraction::add(fraction f1,fraction f2)
{
    numerator=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
    denominator=f1.denominator*f2.denominator;
}
void fraction::display()
{
    cout<<"Addition: "<<numerator<<"/"<<denominator<<endl;
}
int main()
{
    char t;
    fraction frac1,frac2,frac3;
    do
    {
        frac1.get();
        frac2.get();
        frac3.add(frac1,frac2);
        frac3.display();
        cout <<"\n\nDo you want to continue(y,n): ";
        cin >>t;
    }
    while(t == 'Y' || t== 'y');
    return 0;
}

