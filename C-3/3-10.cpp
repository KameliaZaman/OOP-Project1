#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float P,r,C,t;
    int n=0;
    cout<<"Enter initial amount: ";
    cin>>P;
    cout<<"Enter interest rate (percent per year): ";
    cin>>r;
    cout<<"Enter final amount: ";
    cin>>C;
    r=1+(r/100);
    t=P;
    while(t<C)
    {
        t*=r;
        n++;
    }
    cout<<"Year: "<<n<<endl;
    return 0;
}

