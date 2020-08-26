#include<iostream>
#include<iomanip>
using namespace std;
class Sterling
{
private:
    long long int pounds;
    int shilings,pence;
public:
    Sterling():pounds(0),shilings(0),pence(0)
    {  }
    Sterling(double p)
    {
        pounds =static_cast<int>(p) ;
        double p1= p - pounds;
        p1 = p1*20.0;
        shilings = static_cast<int>(p1);
        double s1 = p1-shilings;
        s1=s1*240.0 ;
        pence = static_cast<int>(s1);
    }
    Sterling(long long int pn, int sh,int pe):pounds(pn),shilings(sh),pence(pe)
    {  }
    void getSterling()
    {
        char ch;
        cout<< "Enter an amount in pounds, shillings, and pence, format \x9c 9.19.11: ";
        cin>>ch>>pounds>>ch>>shilings>>ch>>pence;
    }
    void putSterling()
    {
        cout<<'\x9c'<<pounds<<'.'<<shilings<<'.'<<pence<<endl;
    }
    Sterling operator + (Sterling);
    Sterling operator - (Sterling);
    Sterling operator * (Sterling);
    Sterling operator / (Sterling);
    operator double();
};
Sterling Sterling::operator+(Sterling s2)
{
    return Sterling(double(Sterling(pounds,shilings,pence))+double(s2));
}
Sterling Sterling::operator - (Sterling s2)
{
    return Sterling(double(Sterling(pounds,shilings,pence))-double(s2));
}
Sterling Sterling::operator*(Sterling s2)
{
    return Sterling(double(Sterling(pounds,shilings,pence))*double(s2));
}
Sterling Sterling::operator/(Sterling s2)
{
    return Sterling(double(Sterling(pounds,shilings,pence))/double(s2));
}
Sterling::operator double()
{
    double x= pounds + shilings/20 + pence/(12*20);
    return x;
}
int main()
{
    Sterling s1, s2, sum, sub, mul,div;
    Sterling n(4.4) ;
    s1.getSterling();
    s1.putSterling();
    s2.getSterling();
    s2.putSterling();
    cout<<"Summation: ";
    sum = s1 + s2;
    sum.putSterling();
    cout<<"Subtraction: ";
    sub = s1 - s2;
    sub.putSterling();
    cout<<"Multiplication: ";
    mul = s1 * s2;
    mul.putSterling();
    mul = s1*n;
    mul.putSterling();
    cout<<"Division: ";
    div = s1 / s2 ;
    div.putSterling();
    div = s1/n;
    div.putSterling();
    cout<<endl;
    return 0;
}
