#include <iostream>
#include <iomanip>
using namespace std;
void sum(int [], int [], int [], int);
int main()
{
    int n= 20;
    int ara1[n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,18,20};
    int ara2[n] = {11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int ara3[n] = {};
    cout << setw(7) << "Array 1" << setw(3) << "+" << setw(10)<< "Array 2" << setw(3) << "=" << setw(10) << "Array 3" << endl;
    sum(ara1,ara2,ara3,n);
}
void sum(int a[], int b[], int c[], int l)
{
    for (int i = 0; i <l; ++i)
    {
        c[i]= b[i] + a[i];
        cout << setw(7) << a[i] << setw(3) << "+" << setw(10)<< b[i] << setw(3) << "=" << setw(10) << c[i] << endl;
    }
}
