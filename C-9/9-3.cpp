#include<iostream>
#include<string>
using namespace std;
class publication
{
private:
    string title;
    float price;
public:
    void getdata()
    {
        cout<<"Enter title: ";
        cin>>title;
        cout<<"Enter price: ";
        cin>>price;
    }
    void putdata()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
class sales
{
private:
    float ara[5];
public:
    void getdata()
    {
        cout<<"Enter sales: ";
        for(int i=0; i<3; i++)
        {
            cout<<i+1<<". ";
            cin>>ara[i];
        }
    }
    void putdata()
    {
        cout<<"Sales: ";
        for(int i=0;i<3;i++)
        {
            cout<<i+1<<". "<<ara[i]<<endl;
        }
    }
};
class book:public publication, public sales
{
private:
    int count;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter number of pages: ";
        cin>>count;
        sales::getdata();
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Pages: "<<count<<endl;
        sales::putdata();
    }
};
class tape:public publication,public sales
{
private:
    float time;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter playing time: ";
        cin>>time;
        sales::getdata();
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Time: "<<time<<endl;
        sales::putdata();
    }
};
int main()
{
    book x;
    tape y;
    x.getdata();
    y.getdata();
    x.putdata();
    y.putdata();
    return 0;
}
