// 
#include<iostream>
using namespace std;
 class student
{
   public:
   string name ;
   int age;
    void display(){
        cout<<"Name of student is "<<name<<endl;
        cout<<"Age of student is "<<age<<endl;
    }
}; 
int main()
{
  student c1;
  c1.name="lucky";
    c1.age=20;  
   c1.display();
    return 0;

}