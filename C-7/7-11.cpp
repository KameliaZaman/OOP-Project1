#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ldtoms(long double sum)
{
    stringstream ss (stringstream::in | stringstream::out);
    ss.setf(ios::fixed);
    ss << setprecision(2) << sum;
    string s = ss.str();
    s.insert(0, "$");
    int p = s.find('.') - 1, n = 0;
    for(int i = p; i > 0; i--)
        if(++n % 3 == 0)
            s.insert(i, ",");
    return s;
}
int main()
{
    long double n;
    char ch;
    do
    {
        cout<<"Enter amount: ";
        cin>>n;
        string ara= ldtoms(n);
        cout<<"Money: "<<ara<<endl;
        cout<<"Continue? (y/n): ";
        cin>>ch;
    }
    while(ch!='n');
    return 0;
}
