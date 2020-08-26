#include <iostream>
#include <string>
using namespace std;
class person
{
protected:
    string name;
    float salary;
public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void printData()
    {
        cout << endl << name;
        cout << endl << salary;
    }
    float getSalary()
    {
        return salary;
    }
};
int main()
{
    void salsort(person**, int);
    person* persPtr[100];
    person* salptr[100];
    int n = 0;
    char choice;
    do
    {
        salptr[n]=new person;
        salptr[n]->setData();
        n++;
        cout << "Enter another (y/n)? ";
        cin >> choice;
    }
    while( choice=='y' );
    cout << "\nUnsorted list: ";
    for(int j=0; j<n; j++)
    {
        salptr[j]->printData();
    }
    salsort(salptr, n);
    cout << "\nSorted list: ";
    for(int j=0; j<n; j++)
    {
        salptr[j]->printData();
    }
    cout << endl;
    return 0;
}
void salsort(person** pp, int n)
{
    void order(person**, person**);
    int j, k;
    for(j=0; j<n-1; j++)
        for(k=j+1; k<n; k++)
        {
            if((*(pp+j))->getSalary() > (*(pp+k))->getSalary() )
            {
                person* tempptr=*(pp+j);
                *(pp+j)=*(pp+k);
                *(pp+k)=tempptr;
            }
        }
}
