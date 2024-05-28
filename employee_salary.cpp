#include<iostream>
using namespace std;
class Employee
{
    public:

    int ID;
    char Name[50];
    float basic ;
    float hra;
    float da;
    float ta;
    float salary;
    
    void displayEmployee()
    {
        cout<<"ID : "<<ID<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Basic : "<<basic<<endl;
        cout<<"hra : "<<hra<<endl;
        cout<<"da : "<<da<<endl;
        cout<<"ta : "<<ta<<endl;
        cout<<"salary : "<<salary<<endl;
    }
    void calculatesalary()
    {
        hra = basic * 0.12;
        da = basic * 0.18;
        ta = basic * 0.1;
        salary = hra + da + ta;
    }
};
int main()
{
    Employee E;
    cout<<"Enter The ID : "<<endl;
    cin>>E.ID;

    cout<<"Enter The Name : "<<endl;
    cin>>E.Name;
     
    cout<<"Enter The Salary : "<<endl;
    cin>>E.basic;

    E.calculatesalary();
    E.displayEmployee();

    return 0;
}