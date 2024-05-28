


#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    public :
    int ID;
    string Name ;
    float salary;
    

    Employee()         // constructors
    {
        
     ID = 0;
     Name = "";
     salary = 0;
    }

    Employee(int ID , string Name, float salary )    // parameterized constructor 
    {
           this->ID = ID;
           this->Name = Name;
           this->salary=salary;
    }
    Employee(Employee &e)   //copy constructor
    {
            ID = e.ID;
            Name = e.Name;
            salary = e.salary;
    }

    void printf()   //
    {
        cout<<"ID : "<<ID<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"salary : "<<salary<<endl;
    }

     
    
};
int main()
{
    Employee e1;
  
    e1.ID = 15;
    e1.Name = "Maheshwari";
    e1.salary = 15000.0;

    Employee e2(16, "Cartoon", 16000);
    Employee e3(e2);
    e3.printf();

    Employee *e4 = new Employee();

    delete (e4);


    return 0;
}