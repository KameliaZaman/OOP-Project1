#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,P=1.487,F=0.172,D=0.584,Y=0.00955;
    cout<<"Enter the amount in dollars: ";
    cin>>n;
    cout<<"In Pound: "<<P*n<<"\nIn Franc: "<<F*n<<"\nIn Deutschemark: "<<D*n<<"\nIn Yen: "<<Y*n<<endl;
    return 0;
}
