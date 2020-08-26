#include<iostream>
#include<iomanip>
using namespace std;
class angle
{
private:
    int degrees;
    float minutes;
    char direction;
public:
    void getdata();
    void disp();
};
void angle::getdata()
{
    cout <<"Enter degrees: ";
    cin >>degrees;
    cout <<"Enter minutes: ";
    cin >>minutes;
    cout <<"Enter directions(E, W, N, S): ";
    cin >>direction;
}
void angle::disp()
{
    cout <<degrees <<"\xF8" <<minutes <<"\' " <<direction;
    if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w')
    {
        cout <<" Longitude !";
    }
    if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's')
    {
        cout <<" Latitude !";
    }
}
class ship
{
private:
    static int count;
    int cnt;
    angle lat,lon;
public:
    ship()
    {
        count++;
        cnt=count;
    }
    void get_c();
    void display();
};
int ship::count = 0;
void ship::get_c()
{
    cout <<"Enter longitude of ship: ";
    lon.getdata();
    cout <<"Enter latitude of ship: ";
    lat.getdata();
}
void ship::display()
{
    cout <<"Ship Serial Number: " <<cnt<<endl;
    lon.disp();
    cout <<"\n";
    lat.disp();
}
int main()
{
    ship c1,c2,c3;
    c1.get_c();
    c2.get_c();
    c3.get_c();
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
