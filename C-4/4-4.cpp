#include<iostream>
#include<iomanip>
using namespace std;
struct employee
{
    int number;
    float compensation;
};
int main()
{
    employee e1,e2,e3;
    cout<<"Enter first employee number and the employee's compensation: ";
    cin>>e1.number>>e1.compensation;
    cout<<"Enter second employee number and the employee's compensation: ";
    cin>>e2.number>>e2.compensation;
    cout<<"Enter third employee number and the employee's compensation: ";
    cin>>e3.number>>e3.compensation;
    cout<<"\tEmployee number:\tEmployee's compensation:\n\t"<<e1.number<<"\t\t\t"<<e1.compensation<<endl<<"\t"<<e2.number<<"\t\t\t"<<e2.compensation<<endl<<"\t"<<e3.number<<"\t\t\t"<<e3.compensation<<endl;
    return 0;
}

