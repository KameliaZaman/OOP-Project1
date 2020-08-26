#include<iostream>
#include<iomanip>
using namespace std;
class Int
{
private:
    int V;
public:
    Int():V(0)
    {    }
    Int(int v):V(v)
    {    }
    void display();
    void add(Int,Int);
};
void Int::display()
{
    cout<<"Value: "<<V<<endl;
}
void Int::add(Int v1,Int v2)
{
    V=v1.V+v2.V;
}
int main()
{
	Int num1,num2(7),num3(17);
	num1.add(num2, num3);
	num1.display();
	return 0;
}
