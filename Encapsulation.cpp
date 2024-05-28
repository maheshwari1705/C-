#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    int id;
    string name;
    float Price;

public:
    Product()
    {
        id = 0;
        name = "";
        Price = 0;
    }

    Product(int id, string name, float Price)
    {
        this->id = id;
        this->name = name;
        this->Price = Price;
    }

    Product(Product &P)
    {
        id = P.id;
        name = P.name;
        Price = P.Price;
    }

    ~Product()
    {
        cout << "Killing Object." << endl;
    }

    int getID()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return Price;
    }

    void setID(int ID)
    {
        this->id = id;
    }
    void setName(string name )
    {
        this->name = name;
    }
    void setPrice(float Price)
    {
        this->Price = Price;
    }

    void print()
    {
        cout << "ID = " <<id<<endl;
        cout << "name = " <<name<<endl;
        cout << "Price = " <<Price<<endl;
    }
};

int main()
{
    Product P;
    P.setID(123);
    P.setName("Maheshwari");
    P.setPrice(1250);

    cout << "Printing all the details" << endl;
    P.print();

    cout << "Printing id:" <<  P.getID() << endl;

    return 0;
}
