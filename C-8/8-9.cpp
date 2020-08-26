#include <iostream>
#include <process.h>
using namespace std;
const int LIMIT = 100;
class safearay
{
private:
    int arr[LIMIT];
public:
    int& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
        {
            cout << "\nIndex out of bounds";
            exit(0);
        }
        return arr[n];
    }
};
int main()
{
    safearay sa1;
    int x,y;
    cout<<"Enter the array range: ";
    cin>>x>>y;
    for(int j=x; j<=y; j++)
        sa1[j] = j*10;
    for(int j=x; j<=y; j++)
        cout << "Element " << j << " is " <<sa1[j]<< endl;
    return 0;
}
