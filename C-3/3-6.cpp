#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long int n,fact,i;
    cout<<"Enter a number: ";
    while(cin>>n && n!=0)
    {
        fact=1;
        for(i=n;i>0;i--)
            fact=fact*i;
        cout<<"Factorial is "<<fact<<endl;
        cout<<"Enter a number: ";
    }
    return 0;
}
