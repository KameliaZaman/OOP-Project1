#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0)
    { }
    Distance(int ft, float in) : feet(ft), inches(in)
    { }
    void getdist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << "\" ";
    }
    Distance operator - ( Distance ) const;
};
Distance Distance::operator - (Distance d2) const
{
    int f = feet - d2.feet;
    float i = inches - d2.inches;
    if(i<0)
    {
        i += 12.0;
        f--;
    }
    return Distance(f,i);
}
int main()
{
    Distance dist1, dist3;
    dist1.getdist();
    Distance dist2(11, 6.25);
    dist3 = dist1 - dist2;
    cout << "dist1 = ";
    dist1.showdist();
    cout << endl;
    cout << "dist2 = ";
    dist2.showdist();
    cout << endl;
    cout << "dist3 = ";
    dist3.showdist();
    cout << endl;
    return 0;
}
