#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class employee
{
private:
    string name;
    long long int num;
public:
    void getdata();
    void putdata();
};
void employee::getdata()
{
    cout<<"Enter name: "; cin>>name;
    cout<<"Enter number: "; cin>>num;
}
void employee::putdata()
{
    cout<<name<<" "<<num<<endl;
}
int main()
{
    employee ara[1000];
    int i;
    for(i=0;i<100;i++)
    {
        ara[i].getdata();
    }
    cout<<"Employee details: ";
    for(i=0;i<2;i++)
    {
        ara[i].putdata();
    }
    return 0;
}
