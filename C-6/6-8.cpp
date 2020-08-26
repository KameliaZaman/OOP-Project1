#include<iostream>
#include<iomanip>
using namespace std;
class serial
{
private:
    static int count;
    int cnt;
public:
    serial()
    {
        count++;
        cnt=count;
    }
    int get_c()
    {
        return cnt;
    }
};
int serial::count = 0;
int main()
{
    serial c1,c2,c3;
    cout<<" I am object number "<<c1.get_c()<<endl;
    cout<<" I am object number "<<c2.get_c()<<endl;
    cout<<" I am object number "<<c3.get_c()<<endl;
    return 0;
}
