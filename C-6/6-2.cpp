#include<iostream>
#include<iomanip>
using namespace std;
class tollBooth
{
private:
    unsigned int totalcar;
    double totalcash;
public:
    tollBooth():totalcar(0),totalcash(0.0)
    {    }
    tollBooth(unsigned int car, double cash):totalcar(car),totalcash(cash)
    {    }
    void payingcar();
    void nopaycar();
    void display();
};
void tollBooth::payingcar()
{
    totalcar++;
    totalcash++;
}
void tollBooth::nopaycar()
{
    totalcar++;
}
void tollBooth::display()
{
    cout<<"Total cars: "<<totalcar<<" "<<"Total Cash: "<<totalcash<<endl;
}
int main()
{
    tollBooth x;
    char ch;
    cout<<"Y to paid cars, N to unpaid cars, others to invalid condition: "<<endl;
    while(cin>>ch)
    {
        if(ch=='Y')
            x.payingcar();
        else  if(ch=='N')
            x.nopaycar();
        else
        {
            x.display();
            break;
        }
    }
    return 0;
}
