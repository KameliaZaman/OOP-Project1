#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double deci,deci1,deci2;
    cout<<"Enter decimal pounds: ";
    cin>>deci;
    int p,s,pn;
    p=static_cast<int>(deci);
    deci1=(deci-p)*20;
    s=static_cast<int>(deci1);
    deci2=(deci1-s)*12;
    pn=static_cast<int>(deci2);
    cout<<"Equivalent in old notation = \x9c"<<p<<"."<<s<<"."<<pn<<"."<<endl;
    return 0;
}
