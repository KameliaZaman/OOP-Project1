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
    void add(time, time);
};
void time::display() const
{
    cout <<"Time: "<<hours <<":" <<minutes <<":" <<seconds<<endl;
}
void time::add(time t1, time t2)
{
    seconds = t1.seconds + t2.seconds;
    if(seconds > 59)
    {
        seconds -= 60;
        minutes++;
    }
    minutes += t1.minutes + t2. minutes;
    if(minutes > 59)
    {
        minutes -= 60;
        hours++;
    }
    hours += t1.hours + t2.hours;
}
int main()
{
    const time tm1(9, 05, 45);
    const time tm2(5, 52, 17);
    time tm3;
    tm3.add(tm1, tm2);
    tm3.display();
    return 0;
}
