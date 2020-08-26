#include <iostream>
#include<iomanip>
using namespace std;
class date
{
private:
    int month;
    int day;
    int year;
public:
    void get();
    void display();
};
void date::get()
{
    cout <<"Enter date in mm/dd/yy format: ";
    cin >>month >>day >>year;
}
void date::display()
{
    cout <<"Date: " <<month <<"/" <<day <<"/" <<year<<endl;
}
int main()
{
    date d;
    d.get();
    d.display();
    return 0;
}
