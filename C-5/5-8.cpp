#include<iostream>
using namespace std;
void Swapn(int a,int b);
void displays(int x,int y);
int main()
{
    int p,q,x;
    cout<<"Enter two numbers: ";
    cin>>p>>q;
    Swapn(p,q);
    return 0;
}
void Swapn(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    displays(a,b);
}
void displays(int x,int y)
{
    cout<<"After swapping: "<<x<<" "<<y;
}
