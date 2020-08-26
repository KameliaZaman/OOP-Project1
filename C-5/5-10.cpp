#include<iostream>
#include<iomanip>
using namespace std;
int count=0;
void global();
int localstat();
int main()
{
    int s;
    global();
    global();
    global();
    global();
    global();
    global();
    global();
    global();
    global();
    global();
    localstat();
    localstat();
    localstat();
    localstat();
    s=localstat();
    cout<<"I have been called "<<count<<" times using global variable"<<endl;
    cout<<"I have been called "<<s<<" times using local static variable"<<endl;
    return 0;
}
void global()
{
    count++;
}
int localstat()
{
    static int cnt=0;
    cnt++;
    return cnt;
}
