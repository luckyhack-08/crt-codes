#include<iostream>
using namespace std;
class student   
{
    private: 
    int regno=1;
    public:
    string name ;
    int rollno;
void display()
{
    cout<<"Name of student is "<<name<<endl;
    cout<<"Roll no of student is "<<rollno<<endl;
    cout<<"Registration no of student is "<<regno<<endl;
    regno++;
}
}
;
int main()
{
    student c1;
    c1.name="lucky";
    c1.rollno=1872;
c1.display();
student c2;
c2.name="bhumi";
c2.rollno=1773;
c2.display();
return 0;

}