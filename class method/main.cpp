#include <iostream>

using namespace std;

class student{
int id_no;
char name[20];
char branch[20];
int year;
int roll_no;

public:
    void accept(){
    cout<<"Enter id_no ,name ,branch,year,roll_no "<<"\n";
    cin>>id_no;
    cin>>name;
    cin>>branch;
    cin>>year;
    cin>>roll_no;

    }
    void display();
};
    void student::display(){
    cout<<"Display Details"<<"\n";
    cout<<"id_no is "<<id_no<<"\n";
    cout<<"name is "<<name<<"\n";
    cout<<"branch is "<<branch<<"\n";
    cout<<"year is"<<year<<"\n";
    cout<<"roll_no is"<<roll_no<<"\n";

    }
int main()
{
    student s;
    s.accept();
    s.display();

    return 0;
}
