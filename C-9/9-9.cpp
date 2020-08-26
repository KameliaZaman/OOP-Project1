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
class date
{
private:
    int month;
    int day;
    int year;
    char ch;
public:
    void get()
    {
        cout <<"Enter date in mm/dd/yy format: ";
        cin >>month >>ch>>day >>ch>>year;
    }
    void display()
    {
        cout <<"Date: " <<month <<"/" <<day <<"/" <<year<<endl;
    }
};
class publication2:public publication,public date
{
public:
    void getin()
    {
        publication::getdata();
        date::get();
    }
    void putin()
    {
        publication::putdata();
        date::display();
    }
};
class book:public publication2
{
private:
    int count;
public:
    void getdata()
    {
        publication2::getin();
        cout<<"Enter number of pages: ";
        cin>>count;
    }
    void putdata()
    {
        publication2::putin();
        cout<<"Pages: "<<count<<endl;
    }
};
class tape:public publication2
{
private:
    float time;
public:
    void getdata()
    {
        publication2::getin();
        cout<<"Enter playing time: ";
        cin>>time;
    }
    void putdata()
    {
        publication2::putin();
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

