#include<iostream>
#include<string>
using namespace std;
class BookStore 
{ 
private:
   int id;
   string author;
   string title;
   string publisher;
   float price;
   int stock;

   public:


   BookStore( int id, string author, string title,  string publisher, float price, int stock)

   {
           this->id= id;
           this->author= author;
           this->title= title;
           this->publisher= publisher;
           this->price= price;
           this->stock= stock;
           
   }

   int getId()
   {
    return id;
   } 

   string getAuthor()
   {
    return author;
   } 

   string getTitle()
   {
    return title;
   } 

   string getPublisher()
   {
    return publisher;
   } 

   float getPrice()
   {
    return price;
   } 

   int getStock()
   {
    return stock;
   } 


   void setId(int id)
   {
     this->id = id;
   }

   void setAuthor(string author)
   {
     this->author = author;
   }

   void setTitle(string title)
   {
     this->title= title;
   }

   void setPublisher(string publisher)
   {
     this->publisher = publisher;
   }

   void setPrice(float  price)
   {
     this->price = price;
   }

   void setStock(int stock)
   {
     this->stock = stock;
   }
   void printBook()
   {
     cout<<"Id"<< id <<endl;
     cout<<"author"<< author <<endl;
     cout<<"title"<< title <<endl;
     cout<<"publisher"<< publisher <<endl;
     cout<<"price"<< price <<endl;
     cout<<"stock"<< stock <<endl;



   }
};
int main()
{ 
    BookStore books[5] = {
                         BookStore(101, "Bagurusamy" , "C++ Guide", "Packet", 848.3, 43),
                         BookStore(654, "william Stallings" , "Operating Systems", "Tata McGraw-Hill", 432, 43 ),
                         BookStore(345, "Bruce Eckel" , "Thinking in java", "Packet", 654.4, 12 ),
                         BookStore(987, "Ron Patton" , "Software Testing", "Wordpress", 2112.3, 22 ),
                         BookStore(232, "Bagurusamy" , "Design Patterns", "Tata McGraw-Hill", 848.33, 98 )};
                         

    int stock;
    int id = 0;
    bool found ;
    int i;

    cout << "Enter book Id " <<endl;
    cin >> id;

    cout << "Enter Order Quantity " <<endl;
    cin >> stock;

    for(i=0; i<5; i++)
    {
        if(id == books[i].getId())
        {
            found = true;
            if(books[i].getStock() - stock >= 0)
            {
                cout << "Book  Order Confirmed."<<endl;
                books[i].setStock(books[i].getStock() - stock);
            }

            else
            {
                cout << "Required copied are not in stock"<< endl;
            }
            break;

        }
        else 
             found = false;
    }
    
    if(!found)
    {
        cout << "Required Book was not found in stock "<< endl;
    }

     return 0;
}