#include<iostream>
using namespace std;
class player
{
    public:
    string name;
    void setName(string n){
        name=n;

    }
};
class cricketer : public player{
    public:
    int run;
    void setRuns(int r){
        run=r;

    }
};
class Indiancricketer : public cricketer{
     public:
    string team;
    void setTeam(string t){
        team=t;
    }
        void show()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<run<<endl;
        cout<<"Team:"<<team<<endl;

    }

}
   ;
int main(){
    int r;
 
    string t;
    cin>>r>>t;
    Indiancricketer c1;
    c1.setName("virat");
    c1.setRuns(r);
    c1.setTeam(t);
 c1.show();
return 0;

}  