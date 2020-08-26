#ifndef PASSENGER_H
#define PASSENGER_H
#include "passenger.h"
#include<iostream>
using namespace std;
#define MAX 100
char x, y, z;
enum months {January,February,March,April,May,June,July,August,September,October,November,December};       //Enumeration
template<class t1, class t2, class t3>                                                                                                                                      //Template
class passenger
{
    public :
    t1 name[MAX];
    t1 add[MAX];
    t1 email[MAX];
    t3 mobile;
    t2 age;
    t1 gender;
    t1 departure[MAX];
    t1 arrival[MAX];
    t2 dayp,monp,yearp;
    months mmp;
    t2 serial;
public :
    passenger():age(0),dayp(0),monp(0),yearp(0),serial(0)                           //Constructor
    {
        cout<<"\t\t\tPassenger Created"<<endl;
    }
    passenger(t2 c):serial(c)
    {    }
    t2 getInfo()
    {
        serial++;
        cout << "\t\t\tEnter Passenger's Name: ";
        cin.get();
        cin.getline(name,20);
        cout << "\t\t\tEnter the Address Details: ";
        cin.getline(add,50);
        cout << "\t\t\tEnter email address: ";
        cin.getline(email,50);
        cout << "\t\t\tEnter Phone Number: ";
        cin >> mobile;
        cout << "\t\t\tEnter Age: ";
        cin >> age;
        cout <<"\t\t\tEnter Gender(M/F): ";
        cin >> gender;
        t2 n;
        t2 k = 0;
        do
        {
            cout << "\t\t\tSelect City of Departure"<<endl;
            cout << "\t\t\t1. Dhaka"<<endl;
            cout << "\t\t\t2. Chittagong"<<endl;
            cout << "\t\t\t3. Sylhet"<<endl;
            cout << "\t\t\t4. Rajshahi"<<endl;
            cout << "\t\t\t5. Khulna"<<endl;
            cout << "\t\t\t6. Bogra"<<endl;
            cout << "\t\t\tChoose one:  ";
            cin >> n;
            switch (n)
            {
            case 1:
                strcpy(departure, "Dhaka");                      //StringCopy
                break;
            case 2:
                strcpy(departure, "Chittagong");               //StringCopy
                break;
            case 3:
                strcpy(departure, "Sylhet");                      //StringCopy
                break;
            case 4:
                strcpy(departure, "Rajshahi");                     //StringCopy
                break;
            case 5:
                strcpy(departure, "Khulna");                   //StringCopy
                break;
            case 6:
                strcpy(departure, "Bogra");                      //StringCopy
                break;
            default:
                cout << "\t\t\tInvalid Choice"<<endl;
                k++;
            }
        }
        while(k != 0);
        t2 p = 0;
        do
        {
            cout << "\t\t\tSelect City of Arrival"<<endl;
            cout << "\t\t\t1. Dhaka"<<endl;
            cout << "\t\t\t2. Chittagong"<<endl;
            cout << "\t\t\t3. Sylhet"<<endl;
            cout << "\t\t\t4. Rajshahi"<<endl;
            cout << "\t\t\t5. Khulna"<<endl;
            cout << "\t\t\t6. Bogra"<<endl;
            cout << "\t\t\tChoose one:  ";
            cin >>n;
            switch(n)
            {
            case 1:
                strcpy(arrival,"Dhaka");
                break;
            case 2:
                strcpy(arrival,"Chittagong");
                break;
            case 3:
                strcpy(arrival,"Sylhet");
                break;
            case 4:
                strcpy(arrival,"Rajshahi");
                break;
            case 5:
                strcpy(arrival,"Khulna");
                break;
            case 6:
                strcpy(arrival,"Bogra");
                break;
            default:
                cout << "\t\t\tInvalid choice"<<endl;
                p++;
            }
        }
        while(p != 0);
        t1 c;
        cout << "\t\t\tDate of Journey (DD/MM/YYYY): ";
        cin>>dayp>>c>>monp>>c>>yearp;
        switch(monp)
        {
        case 1:
            mmp=January;
            break;
        case 2:
            mmp=February;
            break;
        case 3:
            mmp=March;
            break;
        case 4:
            mmp=April;
            break;
        case 5:
            mmp=May;
            break;
        case 6:
            mmp=June;
            break;
        case 7:
            mmp=July;
            break;
        case 8:
            mmp=August;
            break;
        case 9:
            mmp=September;
            break;
        case 10:
            mmp=October;
            break;
        case 11:
            mmp=November;
            break;
        case 12:
            mmp=December;
            break;
        }
    }
    t2 dispInfo()
    {
        cout.setf(ios::left);
        cout <<setw(8)<<serial<<setw(15)<< name <<dayp;
        switch(dayp)
        {
        case 1:
            cout<<"st";
            break;
        case 2:
            cout<<"nd";
            break;
        case 3:
            cout<<"rd";
            break;
        default:
            cout<<"th";
            break;
        }
        switch(mmp)
        {
        case January:
            cout<<" January";
            break;
        case February:
            cout<<" February";
            break;
        case March:
            cout<<" March";
            break;
        case April:
            cout<<" April";
            break;
        case May:
            cout<<" May";
            break;
        case June:
            cout<<" June";
            break;
        case July:
            cout<<" July";
            break;
        case August:
            cout<<" August";
            break;
        case September:
            cout<<" September";
            break;
        case October:
            cout<<" October";
            break;
        case November:
            cout<<" November";
            break;
        case December:
            cout<<" December";
            break;
        }
        cout<<","<<setw(10)<<yearp<<setw(20)<< add <<setw(15)<< mobile <<setw(30)<<email<<setw(20)<<departure <<setw(12)<< arrival<<endl;
    }
    unsigned int get_serial() const
    {
        return serial;
    }
    passenger operator ++(t2)                                //Operator overloading
    {
        return passenger(serial++);
    }
    passenger operator ++()                                      //Operator Overloading
    {
        return passenger(++serial);
    }
    ~passenger()                                                            //Destructor
    {
        cout<<"\t\t\tPassenger Destroyed"<<endl;
    }
};  passenger <char,int,long long int>fileobj;
#endif // PASSENGER_H
