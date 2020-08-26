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
    /*flight()     //Constructor
    {
        cout<<"\t\t\tFlight Created"<<endl;
    }*/
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
    /* ~flight()     //Destructor
     {
         cout<<"\t\t\tFlight Destroyed"<<endl;
     }
     */
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
    int case1,case2;
    int op,count= 0,i=0;
    char g;
    char ch;
    int op1,cnnt=0,j=0;
    Economy ar1[100];
    Business ar2[100];
    Premium ar3[100];
    int a=0,b=0,c=0,x=0,y=0,z=0;
public:
    CHOICE()
    {
        cout<<"\t\t\tChoice Created"<<endl;
    }
    void input_fun()
    {
        do
        {
            cout<<endl<<endl<<"\t\t\t1.Economy"<<endl;
            cout<<"\t\t\t2.Business"<<endl;
            cout<<"\t\t\t3.Premium"<<endl;
            cout<<"\t\t\tAny type"<<endl;
            cout<<"Enter class: ";
            cin>>op;
            if(op==1)
            {
                char yr;
                do
                {
                    ar1[i].getData();
                    ar1[i].showdata();
                    x++;
                    a=x;
                    cout<<"Get again?(y/n): ";
                    cin>>yr;
                }
                while(yr=='y');
            }
            else if(op==2)
            {
                char yt;
                do
                {
                    ar2[i].getData();
                    ar2[i].showdata();
                    y++;
                    b=y;
                    cout<<"Get again?(y/n): ";
                    cin>>yt;
                }
                while(yt=='y');
            }
            else if(op==3)
            {
                char yx;
                do
                {
                    ar3[i].getData();
                    ar3[i].showdata();
                    z++;
                    c=z;
                    cout<<"Get again?(y/n): ";
                    cin>>yx;
                }
                while(yx=='y');
            }
            else
            {
                cout<<endl<<endl<<"\t\t\t1.Economy"<<endl;
                cout<<"\t\t\t2.Business"<<endl;
                cout<<"\t\t\t3.Premium"<<endl;
                do
                {
                    cout<<"Enter class: ";
                    cin>>op1;
                    if(op1==1)
                        ara[j]=new Economy;
                    else if(op1==2)
                        ara[j]=new Business;
                    else if(op1==3)
                        ara[j]=new Premium;
                    ara[j]->getData();
                    j++;
                    cnnt=j;
                    cout<<"Get again?(y/n): ";
                    cin>>g;
                }
                while(g=='y');
                j=0;
                do
                {
                    ara[j]->dispInfo();
                    ara[j] ->input();
                    j++;
                }
                while(j!=cnnt);
            }
            i++;
            count = i;
            cout<<"Get again?(y/n): ";
            cin>>ch;
        }
        while(ch=='y');
    }
    void viewdata()
    {
        i = 0;
        cout<<endl<<endl<<"\t\t\t1.Economy"<<endl;
        cout<<"\t\t\t2.Business"<<endl;
        cout<<"\t\t\t3.Premium"<<endl;
        cout<<"\t\t\tAny type"<<endl;
        cout<<"Enter class: ";
        cin>>case1;
        if(case1==1)
        {
            for(int k = 0; k<a; k++)
            {
                ar1[i].showdata();
            }
        }
        else if(case1==2)
        {
            for(int k = 0; k<b; k++)
            {
                ar2[i].showdata();
            }
        }
        else if(case1==3)
        {
            for(int k = 0; k<c; k++)
            {
                ar3[i].showdata();
            }
        }
        else
        {
start10:
            j = 0;
            cout<<endl<<endl<<"\t\t\t1.Economy"<<endl;
            cout<<"\t\t\t2.Business"<<endl;
            cout<<"\t\t\t3.Premium"<<endl;
            cout<<"Enter class: ";
            cin>>case2;
            if(case2==1)
            {
                for(int p = 0; p<cnnt; p++)
                {
                    ara[j]->dispInfo();
                }
            }
            else if(case2==2)
            {
                for(int p= 0; p<cnnt; p++)
                {
                    ara[j]->dispInfo();
                }
            }
            else if(case2==3)
            {
                for(int p = 0; p<cnnt; p++)
                {
                    ara[j]->dispInfo();
                }
            }
            else
                goto start10;
        }
    }
    ~CHOICE()
    {
        delete ara;
        cout<<"\t\t\tChoice Destroyed"<<endl;
    }
};

int main()
{
    CHOICE ff;
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
        //fstream f2;
        switch(ch1)
        {
        case 1:
        {
            char kk;
            //f2.open("flights.dat",ios::app| ios::binary);
           // do
           // {
                system("@cls||clear");
                cout<<endl<<"\t\t\t<<Adding Airline Information>>"<<endl<<endl;
                ff.input_fun();
               // f2.write((char *)&ff,sizeof(ff));
              //  cout<<endl<<"\t\t\t<<Airline details>>"<<endl<<endl;
                //cout.setf(ios::left);
             //   cout<<endl<<"\t\t\tEnter another?(y/n): ";
               // cin>>kk;
            //}
           // while(kk!='n');
           // f2.close();
        }
        goto start1;
        break;
        case 2:
            char t;
            /* {
                 system("@cls||clear");
                 int count = 0;
                 f2.open("flights.dat",ios::in|ios::binary);
                 f2.read ((char *)&ff,sizeof(ff));
                 while(!f2.eof())
                 {*/
            ff.viewdata();
            //ff.showdata();
            /* f2.read ((char *)&ff,sizeof(ff));
             count++;
            }
            f2.close();
            cout << "\n\tTotal Number of flights is "<<count<<endl;*/
            cout<<"\t\t\tEnter 'y' to continue: ";
            cin>>t;
            // }
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
//        f2.close();
    }
    break;
    default:
        break;
    }
    return 0;
}

