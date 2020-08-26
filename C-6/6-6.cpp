#include<iostream>
#include<iomanip>
using namespace std;
enum etype {laborer,secretary,manager,accountant,executive,researcher};
class dates
{
private:
    int day;
    int month;
    int year;
public:
    void putDate();
    void showDate();
};
void dates::putDate()
{
    char ch;
    cout <<"Enter employee date of joining in dd/mm/yyyy format: ";
    cin >>day >>ch >>month >>ch >>year;
}
void dates::showDate()
{
    cout <<"\t\t\t"<<day <<"/" <<month <<"/" <<year<<"\t\t\t";
}
class employee
{
private:
    int emnum;
    float emcomp;
    dates d;
    etype emp;
public:
    employee():emnum(0),emcomp(0.0)
    {    }
    void getemployee();
    void putemployee();
};
void employee::getemployee()
{
    cout<<"Enter employee number and the employee's compensation: ";
    cin>>emnum>>emcomp;
    d.putDate();
    char type;
    cout<<"Enter employee type (first letter only: laborer, secretary, manager,accountant, executive, researcher): ";
    cin>>type;
    switch(type)
    {
    case 'l':
        emp=laborer;
        break;
    case 's':
        emp=secretary;
        break;
    case 'm':
        emp=manager;
        break;
    case 'a':
        emp=accountant;
        break;
    case 'e':
        emp=executive;
        break;
    case 'r':
        emp=researcher;
        break;
    }
}
void employee::putemployee()
{
    cout<<"\t"<<emnum<<"\t\t\t"<<emcomp<<"\t";
    d.showDate();
    switch(emp)
    {
    case laborer:
        cout<<"laborer"<<endl;
        break;
    case secretary:
        cout<<"secretary"<<endl;
        break;
    case manager:
        cout<<"manager"<<endl;
        break;
    case accountant:
        cout<<"accountant"<<endl;
        break;
    case executive:
        cout<<"executive"<<endl;
        break;
    case researcher:
        cout<<"researcher"<<endl;
        break;
    }
}
int main()
{
    employee e1,e2,e3;
    e1.getemployee();
    e2.getemployee();
    e3.getemployee();
    cout<<"\tEmployee number:\tEmployee's compensation:\tEmployee date of joining:\tEmployee type:\n\t";
    e1.putemployee();
    e2.putemployee();
    e3.putemployee();
    return 0;
}
