#include <iostream>
using namespace std;
class Queue
{
private:
    enum { MAX = 10 };
    int st[MAX];
    int fro,rear;
public:
    Queue()
    {
        fro=rear=-1;
    }
    void put(int var)
    {
        if(rear==MAX-1)
        {
            cout<<"Queue overflow"<<endl;
        }
        else if(fro==-1 && rear==-1)
        {
            fro=rear=0;
            st[rear]=var;
            cout<<"Item inserted: "<<var<<endl;
        }
        else
        {
            rear++;
            st[rear]=var;
            cout<<"Item inserted: "<<var<<endl;
        }
    }
    void get()
    {
        if(fro==-1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Queue items: "<<endl;
            for(int i=fro; i<=rear; i++)
            {
                cout<<st[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Queue s1;
    s1.put(11);
    s1.put(22);
    s1.get();
    s1.put(33);
    s1.put(44);
    s1.put(55);
    s1.put(66);
    s1.get();
    return 0;
}
