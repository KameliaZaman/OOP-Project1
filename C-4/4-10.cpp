#include<iostream>
#include<iomanip>
using namespace std;
struct sterling
{
    int pounds,shillings,pence;
};
int main()
{
    double deci,deci1,deci2;
    cout<<"Enter decimal pounds: ";
    cin>>deci;
    sterling New;
    New.pounds=static_cast<int>(deci);
    deci1=(deci-New.pounds)*20;
    New.shillings=static_cast<int>(deci1);
    deci2=(deci1-New.shillings)*12;
    New.pence=static_cast<int>(deci2);
    cout<<"Equivalent in old notation = \x9c"<<New.pounds<<"."<<New.shillings<<"."<<New.pence<<"."<<endl;
    return 0;
}
