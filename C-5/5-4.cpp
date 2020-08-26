#include<iostream>
#include<iomanip>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
Distance fun(Distance d1, Distance d2);
void display(Distance dx);
int main()
{
    Distance dis1,dis2,dis3;
    cout<<"Enter first distance in feet and inches: ";
    cin>>dis1.feet>>dis1.inches;
    cout<<"Enter second distance in feet and inches: ";
    cin>>dis2.feet>>dis2.inches;
    dis3=fun(dis1,dis2);
    display(dis3);
    return 0;
}
Distance fun(Distance d1,Distance d2)
{
    if(d1.feet>d2.feet)
        return d1;
    if(d1.feet<d2.feet)
        return d2;
    if(d1.inches>d2.inches)
        return d1;
    else
        return d2;
}
void display(Distance dx)
{
    cout<<"Larger distance is: "<<dx.feet<<"\'-"<<dx.inches<<"\""<<endl;
}
