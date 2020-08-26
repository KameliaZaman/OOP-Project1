#include <iostream>
using namespace std;
const int LEN = 80;
class employee
{
private:
    char name[LEN];
    unsigned long number;
public:
    void getdata()
    {
        cout << "\n Enter last name: ";
        cin >> name;
        cout << " Enter number: ";
        cin >> number;
    }
    void putdata() const
    {
        cout << "\n Name: "<< name;
        cout << "\n Number: "<< number<<endl;
    }
};
class employee2:public employee
{
private:
    double compensation;
    enum type{hourly,weekly,monthly};
    type em;
public:
    void getdata()
    {
        char ch;
        employee::getdata();
        cout<<"Enter compensation: ";
        cin>>compensation;
        cout<<"Enter payment type(h/w/m): ";
        cin>>ch;
        if(ch=='h' || ch=='H')
            em=hourly;
        else if(ch=='w' || ch=='W')
            em=weekly;
        else if(ch=='m' || ch=='M')
            em=monthly;
    }
    void putdata() const
    {
        employee::putdata();
        cout<<"Employee compensation: "<<compensation<<endl;
        switch(em)
        {
        case hourly:
            cout<<"Hourly"<<endl;
            break;
        case weekly:
            cout<<"Weekly"<<endl;
            break;
        case monthly:
            cout<<"Monthly"<<endl;
            break;
        }
    }
};
class manager : public employee2
{
private:
    char title[LEN];
    double dues;
public:
    void getdata()
    {
        employee2::getdata();
        cout << " Enter title: ";
        cin >> title;
        cout << " Enter golf club dues: ";
        cin >> dues;
    }
    void putdata() const
    {
        employee2::putdata();
        cout << "\n Title: "<< title;
        cout << "\n Golf club dues: "<< dues<<endl;
    }
};
class scientist : public employee2
{
private:
    int pubs;
public:
    void getdata()
    {
        employee2::getdata();
        cout << " Enter number of pubs: ";
        cin >> pubs;
    }
    void putdata() const
    {
        employee2::putdata();
        cout << "\n Number of publications: "<< pubs<<endl;
    }
};
class laborer : public employee2
{   };
int main()
{
    manager m1, m2;
    scientist s1;
    laborer l1;
    cout << endl;
    cout << "\nEnter data for manager 1";
    m1.getdata();
    cout << "\nEnter data for manager 2";
    m2.getdata();
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for laborer 1";
    l1.getdata();
    cout << "\nData on manager 1";
    m1.putdata();
    cout << "\nData on manager 2";
    m2.putdata();
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();
    cout << endl;
    return 0;
}
