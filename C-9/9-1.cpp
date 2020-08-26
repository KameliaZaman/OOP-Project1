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
class book:public publication
{
private:
    int count;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter number of pages: ";
        cin>>count;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Pages: "<<count<<endl;
    }
};
class tape:public publication
{
private:
    float time;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter playing time: ";
        cin>>time;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Time: "<<time;
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
