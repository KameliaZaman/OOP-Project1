#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0)
    {    }
    Distance(int f, float in):feet(f),inches(in)
    {    }
    void getdist()
    {
        cout << "\n Enter feet: ";
        cin >> feet;
        cout << " Enter inches: ";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << "\" ";
    }
    void add_dist(Distance,Distance);
    void div_dist(Distance, int);
};
void Distance::add_dist(Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet + d3.feet;
}
void Distance::div_dist(Distance d2, int divisor)
{
    float fltfeet = d2.feet + d2.inches/12.0;
    fltfeet /= divisor;
    feet = int(fltfeet);
    inches = (fltfeet-feet) * 12.0;
}
int main()
{
    Distance dist[100]; Distance total(0, 0.0), average;
    int n=0;
    char ans;
    do
    {
        cout << "Enter distance number " << n+1;
        dist[n++].getdist();
        cout << "Enter another (y/n)?: ";
        cin >> ans;
    }
    while( ans != 'n' );
    for(int j=0; j<n; j++)
    {
        total.add_dist(total,dist[j]);
    }
    total.showdist();
    average.div_dist(total,n);
    average.showdist();
    cout << endl;
    return 0;
}
