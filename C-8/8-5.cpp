#include<iostream>
using namespace std;
class time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    time():hours(0), minutes(0), seconds(0)
    {	}
    time(int h, int m, int s):hours(h), minutes(m), seconds(s)
    {	}
    void display();
    time operator + (time);
    time operator ++ () ;
    time operator ++ (int);
    time operator -- ();
    time operator -- (int);
};
time time::operator ++ ()
{
    ++seconds;
    if(seconds>59)
    {
        ++minutes;
        seconds-=60;
    }
    if(minutes>59)
    {
        ++hours;
        minutes-=60;
    }
    return time(hours,minutes,seconds);
}
time time::operator ++ (int )
{
    time T(hours,minutes,seconds);
    ++seconds;
    if(seconds>59)
    {
        ++minutes;
        seconds-=60;
    }
    if(minutes>59)
    {
        ++hours;
        minutes-=60;
    }
    return T;
}
time time::operator -- ()
{
    --seconds;
    if(seconds<0)
    {
        --minutes;
        seconds+=60;
    }
    if(minutes<0)
    {
        --hours;
        minutes+=60;
    }
    return time(hours,minutes,seconds);
}
time time::operator -- (int )
{
    time T(hours,minutes,seconds);
    --seconds;
    if(seconds<0)
    {
        --minutes;
        seconds+=60;
    }
    if(minutes<0)
    {
        --hours;
        minutes+=60;
    }
    return T;
}
void time::display()
{
    cout <<"Time: "<<hours <<":" <<minutes <<":" <<seconds<<endl;
}
time time::operator + (time t1)
{
    int ts=seconds+t1.seconds;
    int tm=minutes+t1.minutes;
    int th=hours+t1.hours;
    if(ts>59)
    {
        ts-=60;
        tm++;
    }
    if(tm>59)
    {
        tm-=60;
        th++;
    }
    return time(th,tm,ts);
}
int main()
{
    time tm1(9, 7, 45);
    time tm2(3, 52, 14);
    time tm3=tm1+tm2;
    tm3.display();
    cout<<"After prefix Increment: "<<endl;
    time tm4=++tm3;
    tm3.display();
    tm4.display();
    cout<<"After postfix Increment: "<<endl;
    time tm5=tm3++;
    tm3.display();
    tm5.display();
    cout<<"After prefix Decrement: "<<endl;
    time tm6=--tm3;
    tm3.display();
    tm6.display();
    cout<<"After postfix Decrement: "<<endl;
    time tm7=tm3--;
    tm3.display();
    tm7.display();
    return 0;
}

