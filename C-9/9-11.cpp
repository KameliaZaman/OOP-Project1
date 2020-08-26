#include <iostream>
using namespace std;
class Pair
{
protected:
    enum { MAX = 50};
    int st[MAX];
    int top;
public:
    Pair()
    {
        top = -1;
    }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop(int v)
    {
        cout<<st[top--]<<")"<<" ";
    }
};
class Stack2 : public Pair
{
public:
    Stack2():Pair()
    {    }
    void push(int x, int y)
    {
        st[++top]=x;
        Pair::push(y);
    }
    int pop(int p, int q)
    {
        cout<<"("<<st[top--]<<",";
        Pair::pop(q);
    }
};
int main()
{
    Stack2 s1;
    cout<<"Push: "<<endl;
    s1.push(2,5);
    s1.push(7,1);
    s1.push(3,12);
    cout<<"Popping: "<<endl;
    s1.pop(3,12);
    s1.pop(7,1);
    s1.pop(2,5);
    cout << endl;
    return 0;
}
