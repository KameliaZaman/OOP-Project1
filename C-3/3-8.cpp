#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int p1,p2,s1,s2,pn1,pn2;
    char a1,b1,c1,a2,b2,c2,t;
    cout<<"Enter first amount: ";
    while(cin>>a1>>p1>>b1>>s1>>c1>>pn1)
    {
        cout<<"Enter second amount: ";
        cin>>a2>>p2>>b2>>s2>>c2>>pn2;
        cout<<"Total is \x9c"<<p1+p2+((s1+s2+((pn1+pn2)/12))/20)<<"."<<(s1+s2+((pn1+pn2)/12))%20<<"."<<(pn1+pn2)%12<<endl;
        cout<<"Do you wish to continue (y/n)? ";
        cin>>t;
        switch(t)
        {
        case 'y':
            cout<<"Enter first amount: ";
            continue;
            break;
        case 'n':
            return 0;
            break;
        }
    }
    return 0;
}
