#include<iostream>
#include<iomanip>
using namespace std;
enum etype {laborer,secretary,manager,accountant,executive,researcher};
int main()
{
    etype emp;
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
    cout<<"Employee type is ";
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
    return 0;
}
