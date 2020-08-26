#include<iostream>
using namespace std;
struct time
{
    int hours;
    int minutes;
    int seconds;
};
long long int time_to_secs(time ta);
time secs_to_time(long long int tb);
void display_t(time tx);
int main()
{
    time t1,t2;
    long long int time;
    cout<<"Enter hours: ";
    cin>>t1.hours;
    cout<<"Enter minutes: ";
    cin>>t1.minutes;
    cout<<"Enter seconds: ";
    cin>>t1.seconds;
    cout<<"Total time structure in seconds is: "<<time_to_secs(t1)<<endl;
    cout<<"Enter total time in seconds: ";   cin>>time;
    t2=secs_to_time(time);
    cout<<"Total seconds in time structure is: ";
    display_t(t2);
    return 0;
}
long long int time_to_secs(time ta)
{
    return ta.hours*3600+ta.minutes*60+ta.seconds;
}
time secs_to_time(long long int tb)
{
    time tt;
    tt.hours=(tb/60)/60;
    tt.minutes=(tb/60)%60;
    tt.seconds=tb%60;
    return tt;
}
void display_t(time tx)
{
    cout<<tx.hours<<":"<<tx.minutes<<":"<<tx.seconds<<endl;
}
