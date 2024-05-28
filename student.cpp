#include<iostream>
using namespace std;
class Student {
    public :
    int ID ;
    char Name[50];
    char Grade;
    int Mark;
    int M_Marathi;
    int M_Hindi;
    int M_English;
    int M_Math;
    int M_Bio;
    float percentage;

    void displayStudent()
    {
        cout<<"ID: "<<ID<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Total_Mark:"<<Mark<<endl;
        cout<<"percentage :"<<percentage<<endl;
        cout<<"Grade of the student : "<<Grade<<endl;

    }
};

class Result
{
    public : 
    void CalcTotalMarks(Student &S1)
    {
          S1.Mark = S1.M_Marathi + S1.M_Hindi + S1.M_English + S1.M_Math + S1.M_Bio ;

    }

    void calcper(Student &S1)
    {
        S1.percentage = S1.Mark/5;

    }
    void displayGrade(Student &S1)
    {   
        
        if ( S1.percentage >= 75 && S1.percentage <= 100 )
        {
              cout<<"The Grade Of the student is : o "<<endl;
              S1.Grade = 'o';
        }
        else if ( S1.percentage >= 60 && S1.percentage <= 75  )
        {
              cout<<"The Grade Of the student is : A "<<endl;
               S1.Grade = 'A';
        }

        else if ( S1.percentage >= 40 && S1.percentage <= 60 )
        {
            cout<<"The Grade of the student : B"<<endl;
            S1.Grade = 'B';
        }
        else if (S1.percentage >= 0 && S1.percentage < 40 )
        {
            cout<<"The Grade of the student : F"<<endl;
            S1.Grade = 'F';
        }

     };
};

int main()
{
    Student S1;
    Result R;

    cout<<"Enter the Student ID : ";
    cin>>S1.ID;

    cout<<"Enter the Student Name : ";
    cin>>S1.Name;
     
    cout<<"Enter the Student's Maratha Mark's : ";
    cin>>S1.M_Marathi;

    cout<<"Enter the Student's Hindi Mark's : ";
    cin>>S1.M_Hindi;

    cout<<"Enter the Student's English Mark's : ";
    cin>>S1.M_English;

    cout<<"Enter the Student's Math Mark's : ";
    cin>>S1.M_Math;

    cout<<"Enter the Student's Bio Mark's : ";
    cin>>S1.M_Bio;



    
    R.CalcTotalMarks(S1);
    R.calcper(S1);
    R.displayGrade(S1);
    S1.displayStudent();
   
    return 0;
}