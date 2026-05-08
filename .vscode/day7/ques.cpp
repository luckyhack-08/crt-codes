//create a college management system in base class conataining person name and age and two derived class conntaining their data  respectively then laso create a virtual funct in that default they are the part of the college otherwise

#include<iostream>
using namespace std;
class person
{
    protected:
    
 string name;
    int age;
    public:
    void getdata()
    {
        cout<<"Enter name and age: ";
        cin>>name>>age;
    }
     void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
virtual void college()
{
    cout<<"They are the part of JECRC"<<endl;

}
    };
    class student : public person
   {
    int rollno;
    public:
    void getdata()
    {
        person::getdata();
        cout<<"Enter roll number: ";
        cin>>rollno;
    }
     void display()
    {
        person::display();
        cout<<"Roll number: "<<rollno<<endl;
    }
   };
   class teacher : public person
   {
    string subject;
    public:
    void getdata()
    {
        person::getdata();
        cout<<"Enter subject: ";
        cin>>subject;
    }
     void display()
    {
        person::display();
        cout<<"Subject: "<<subject<<endl;
    }
    void college()
    {
        cout<<"They belong to teacher class";
    }
   };
   int main()
   {
    student s;
    teacher t;
    s.getdata();
    t.getdata();
    s.display();
    t.display();
    s.college();
    t.college();    
    return 0;

   }

