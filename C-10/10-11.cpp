#include<iostream>
#include<string>
#define MAX 100
using namespace std;
class Array
{
protected:
    int a[10];
public:
    void getData()
    {
        for(int i=0; i<10; i++)
            cin>>a[i];
    }
    void ShowData()
    {
        for(int i=0; i<10; i++)
            cout<<a[i]<<" ";
    }
    int& operator[](int n)
    {
        if(n>MAX)
            cout<<"Index Out Of Boundary!";
        return a[n];
    }
};
int main()
{
    Array* ara[MAX];
    char ch;
    int n=0;
    do
    {
        ara[n]=new Array;
        cout<<"Enter data: ";
        ara[n]->getData();
        n++;
        cout<<endl<<"Continue?(y/n) ";
        cin>>ch;
    }
    while(ch!='n');
    cout<<"Entered array: ";
    for(int i=0;i<n;i++)
        ara[i]->ShowData();
    cout<<endl;
    return 0;
}
