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
    void display() const;
    time operator + (time) const;
};
void time::display() const
{
    cout <<"Time: "<<hours <<":" <<minutes <<":" <<seconds<<endl;
}
time time::operator + (time t1) const
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
    const time tm1(9, 9, 45);
    const time tm2(3, 52, 17);
    time tm3=tm1+tm2;
    tm3.display();
    return 0;
}
