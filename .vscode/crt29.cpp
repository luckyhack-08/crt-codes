#include<iostream>
using namespace std;
class student   
{

    public:
    string name ;
    int rollno;

    student(){
        name="lucky";
        rollno=0;
        }
void display()
{
    cout<<"Name of student is "<<name<<endl;
    cout<<"Roll no of student is "<<rollno<<endl;
   cout<<"Default constructor is called"<<endl;
}
}
;
int main()
{
    student c1;
c1.display();


}