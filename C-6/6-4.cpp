#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
private:
    int emnum;
    float emcomp;
public:
    employee():emnum(0),emcomp(0.0)
    {    }
    void getdata();
    void display();
};
void employee::getdata()
{
    cout<<"Enter employee number and the employee's compensation: ";
    cin>>emnum>>emcomp;
}
void employee::display()
{
    cout<<emnum<<"\t\t\t"<<emcomp<<endl<<"\t";
}
int main()
{
    employee e1,e2,e3;
    e1.getdata();
    e2.getdata();
    e3.getdata();
    cout<<"\tEmployee number:\tEmployee's compensation:\n\t";
    e1.display();
    e2.display();
    e3.display();
    return 0;
}
