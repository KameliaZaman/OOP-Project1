#include<iostream>
#include<string>
#include<string.h>
#include<iomanip>
#include<fstream>
#define MAX 100
using namespace std;
char x, y, z;
enum months {January,February,March,April,May,June,July,August,September,October,November,December};  //Enumeration
class flight     //Class
{
private:
    char flight_name[MAX];
    char flight_no[MAX];
    char time_depart[MAX];
    char time_arrival[MAX];
    int day,mon,year;
    months mm;
    int serial=0;
public :
    flight()     //Constructor
    {
        cout<<"\t\t\tFlight Created"<<endl;
    }
    int getData()
    {
        serial++;
        char c;
        cout<<"\t\t\tEnter the Flight Name: ";
        cin>>flight_name;
        cout << "\t\t\tEnter the Flight Number: ";
        cin >>flight_no;
        cout << "\t\t\tEnter the departure time: ";
        cin >> time_depart;
        cout << "\t\t\tEnter the arrival time: ";
        cin >> time_arrival;
        cout<<"\t\t\tEnter date: ";
        cin>>day>>c>>mon>>c>>year;
        switch(mon)
        {
        case 1:
            mm=January;
            break;
        case 2:
            mm=February;
            break;
        case 3:
            mm=March;
            break;
        case 4:
            mm=April;
            break;
        case 5:
            mm=May;
            break;
        case 6:
            mm=June;
            break;
        case 7:
            mm=July;
            break;
        case 8:
            mm=August;
            break;
        case 9:
            mm=September;
            break;
        case 10:
            mm=October;
            break;
        case 11:
            mm=November;
            break;
        case 12:
            mm=December;
            break;
        }
    }
    int dispInfo()
    {
        cout <<setw(8)<<"S.No."<<setw(15)<<"Name"<<setw(10) <<"No"<<setw(15)<<"Date"<<setw(20)<<"Depart."<<setw(12)<<"Arrival"<<endl;
        cout <<setw(8)<<"-----"<<setw(15)<<"----"<<setw(10) <<"----"<<setw(15)<<setw(20)<<"------"<<setw(12)<<"-------"<<endl;
        cout.setf(ios::left);
        cout <<setw(8)<<serial<<setw(15)<< flight_name<<setw(10) <<flight_no<<" "<<day;
        switch(day)
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
        switch(mm)
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
        cout<<","<<year<<"  " <<setw(20)<<time_depart<<setw(12)<< time_arrival<<endl;
    }
    virtual void input()=0;   //Pure Virtual Function
    ~flight()     //Destructor
    {
        cout<<"\t\t\tFlight Destroyed"<<endl;
    }
};
class Economy:public flight  //Inheritance
{
public:
    int getData()
    {
        flight::getData();
    }
    int showdata()
    {
        flight::dispInfo();
    }
    void input()
    {
        cout<<"\t\t\tEconomy class seat"<<endl<<endl;
    }
};
class Business:public flight   //Inheritance
{
public:
    int getData()
    {
        flight::getData();
    }
    int showdata()
    {
        flight::dispInfo();
    }
    void input()
    {
        cout<<"\t\t\tBusiness class seat"<<endl<<endl;
    }
};
class Premium:public flight     //Inheritance
{
public:
    int getData()
    {
        flight::getData();
    }
    int showdata()
    {
        flight::dispInfo();
    }
    void input()
    {
        cout<<"\t\t\tPremium class seat"<<endl<<endl;
    }
};
class CHOICE:virtual public Economy,virtual public Business,virtual public Premium
{
private:
    flight *ara[100];
    int case1;
    int seatNo;
    int count= 0, i=0;
public:
    CHOICE():seatNo(0)
    {
        cout<<"\t\t\tChoice Created"<<endl;
    }
    void input_fun()
    {
        int op;
        char ch;
        do
        {
            cout<<endl<<endl<<"\t\t\t1.Economy"<<endl;
            cout<<"\t\t\t2.Business"<<endl;
            cout<<"\t\t\t3.Premium"<<endl;
            cout<<"Enter class: ";
            cin>>op;
            if(op==1)
            {
                ara[i]=new Economy;
            }
            else if(op==2)
            {
                ara[i]=new Business;
            }
            else
            {
                ara[i]=new Premium;
            }
            ara[i]->getData();
            i++;
            count = i;
            cout<<"\n get again?";
            cin>>ch;
        }
        while(ch=='y');
    }
    void showdata()
    {
        i=0;
        do
        {
            ara[i]->dispInfo();
            ara[i] ->input();
            i++;
        }
        while(i!=count);
    }
    void viewdata()
    {
        i=0;
        for(int j = 0; j<count; j++)
        {
            ara[i]->dispInfo();
            i++;
        }
    }
    ~CHOICE()
    {
        delete ara;
        cout<<"\t\t\tChoice Destroyed"<<endl;
    }
};
CHOICE ff;
class workers
{
protected:
    float sallery;
    char nmm[100];
public:
    workers():sallery(0)
    {
        cout<<"\t\t\tCrew Created"<<endl;
    }
    void input();
    virtual void people()=0;
    void display() const
    {
        cout << "         " << nmm<< "          " <<sallery<< endl;
    }
    float getsal()
    {
        return sallery;
    }
    ~workers()
    {
        cout << endl << "\t\t\tCrew destroyed" << endl;
    }
};
void workers::input()
{
    cout << endl << "Crew name: ";
    cin >> nmm;
    cout <<"Salary: ";
    cin >> sallery;
}
class pilot:public workers
{
public:
    void input()
    {
        workers::input();
    }
    void display()
    {
        workers::display();
    }
    float getsal()
    {
        workers::getsal();
    }
    void people()
    {
        cout<<"I'm a pilot"<<endl;
    }
};
class airhostess:public workers
{
public:
    void input()
    {
        workers::input();
    }
    void display()
    {
        workers::display();
    }
    float getsal()
    {
        workers::getsal();
    }
    void people()
    {
        cout<<"I'm an air hostess"<<endl;
    }
};
class money   //Association
{
private:
    workers *p[100];     //Pointer
    float total;
public:
    money(): total(0)
    {
        cout << endl << "Money created" << endl;
    }
    void input_fun()
    {
        int op;
        for(int i = 0; i < 2; i++)
        {
            cout<<endl<<"For pilot press 1, for air hostess press 2: ";
            cin>>op;
            if(op==1)
                p[i]=new pilot;
            else if(op==2)
                p[i]=new airhostess;
            p[i]->input();
        }
    }
    void compute_fare()
    {
        total=0;
        for(int i=0; i<2; i++)
        {
            total= total+ p[i]->getsal();
        }
        cout<<endl<< "Total Cost: " << total << endl;
    }
    void display() const
    {
        cout << endl << "          *****Crew info*****" << endl;
        cout << "Crew name: " << "   " << "Salary: "<< endl;
        for(int i = 0; i < 2; i++)
        {
            p[i]->display();
            p[i] ->people();
        }
    }
    friend void fnn(money);
    ~money()
    {
        cout << endl << "Money destroyed" << endl;
    }
};
void fnn(money m)
{
    if(m.total>1000)
        cout<<"High Cost"<<endl;
    else
        cout<<"Low Cost"<<endl;
}
int main()
{
start :
    int ch,cnt=0,cnt1=0,ch1,ch2,cnt2=0;
    do
    {
        cout<<endl<<"\t\t\t***Airlines Reservation System***"<<endl<<endl;
        cout<<"\t\t\t1.Airline Information"<<endl;
        cout<<"\t\t\t2.Passenger Information"<<endl;
        cout<<"\t\t\t3.Exit"<<endl<<endl;
        cout<<"\t\t\tChoose an option-> ";
        cin>>ch;
        if(ch<1 || ch>3)
        {
            cnt++;
            x=getchar();
            if(x==10)
            {
                system("@cls||clear");
                goto start;
            }
        }
    }
    while(cnt!=0);
    switch(ch)
    {
    case 1:
    {
start1:
        system("@cls||clear");
        cout<<endl<<"\t\t\t***Airline Information***"<<endl<<endl;
        do
        {
            cout<<"\t\t\t1.Add Airline Information"<<endl;
            cout<<"\t\t\t2.View Airline Information"<<endl;
            cout<<"\t\t\t3.Go Back to The Main Menu"<<endl<<endl;
            cout<<"\t\t\tChoose an option-> ";
            cin>>ch1;
            if(ch1<1 || ch1>5)
            {
                cnt1++;
                y=getchar();
                if(y==10)
                {
                    system("@cls||clear");
                    goto start1;
                }
            }
        }
        while(cnt1!=0);
        money l;
        fstream f2;
        switch(ch1)
        {
        case 1:
        {
            char kk;
            f2.open("flights.dat",ios::app| ios::binary);
            do
            {
                system("@cls||clear");
                cout<<endl<<"\t\t\t<<Adding Airline Information>>"<<endl<<endl;
                ff.input_fun();
                l.input_fun();
                l.display();
                l.compute_fare();
                fnn(l);
                f2.write((char *)&ff,sizeof(ff));
                cout<<endl<<"\t\t\t<<Airline details>>"<<endl<<endl;
                cout.setf(ios::left);
                ff.showdata();
                cout<<endl<<"\t\t\tEnter another?(y/n): ";
                cin>>kk;
            }
            while(kk!='n');
            f2.close();
        }
        goto start1;
        break;
        case 2:
            char t;
            {
                system("@cls||clear");
                //int count = 0;
                //f2.open("flights.dat",ios::in|ios::binary);
                //f2.read ((char *)&ff,sizeof(ff));
                    ff.viewdata();
                //f2.close();
               // cout << "\n\tTotal Number of flights is "<<count<<endl;
                cout<<"\t\t\tEnter 'y' to continue: ";
                cin>>t;
            }
            if(t=='y')
                goto start1;
            break;
        case 3:
        {
            system("@cls||clear");
            goto start;
        }
        break;
        default:
            break;
        }
        f2.close();
    }
    break;
    default:
        break;
    }
    return 0;
}

