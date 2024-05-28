#include <iostream>
using namespace std;

class Vehicle{
    public:
        char name[20];
        char color[20];
        int topSpeed;

        void print(){
            cout << "Name= " << name<<"\n";
            cout << "Color= " << color<<"\n";
            cout << "Top Speed= " << topSpeed<<"\n";
        }

        void start(){
            cout << "Vehicle is starting.";
        }
};

class Car: public Vehicle{

    public:
        char trans[10];

        void print(){
            Vehicle::print();
            cout << "Transmission= " << trans << "\n";
        }

        void start(){
            cout << "The Car engine starts in a different way than other vehicles.";
        }
};

int main(){

    Car c1;

    cout << "Enter name, color, top speed and transmission type\n";
    cin >> c1.name;
    cin >> c1.color;
    cin >> c1.topSpeed;
    cin >> c1.trans;

    c1.print();

    return 0;
}