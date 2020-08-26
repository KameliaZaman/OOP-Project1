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
    angle():degrees(0),minutes(0),direction(0)
    {    }
    angle(int deg,float m,char d):degrees(deg),minutes(m),direction(0)
    {    }
    void getdata();
    void display();
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
void angle::display()
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
int main()
{
    angle c1;
    c1.getdata();
    c1.display();
    return 0;
}

