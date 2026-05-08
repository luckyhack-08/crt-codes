//virtual function

#include<iostream>
using namespace std;
class player
{
    public:
    virtual void show(){
        cout<<"I am a player:"<<endl;
    
    }

};
class cricketer : public player{
    public:
    int a;
    void show(){
        cout<<"I am a cricketer:"<<endl;
    
    }

};
int main(){
    cricketer c1;
    c1.show();
     
    return 0;
}