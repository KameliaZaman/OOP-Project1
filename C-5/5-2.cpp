#include <iostream>
using namespace std;
double power(double n, int p=2);
int main()
{
    double n,ans;
    int p;
    char t;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Want to enter a power (y/n)? ";
    cin>>t;
    if(t=='y')
    {
        cout<<"Enter power: ";
        cin>>p;
        ans=power(n,p);
    }
    else
        ans=power(n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}
double power(double n,int p)
{
    double result=1;
    for(int j=0; j<p; j++)
        result*=n;
    return result;
}
