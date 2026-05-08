#include<iostream>
using namespace std;
 class player

     {
         public:
       string name;
       

         void setName(string n){
             name =n;

         }
    };
     class cricketer : public player{
      public:
         int runs;
         void setruns(int r){
             runs=r;

         }
         void show(){
             cout<<"Name:"<<name<<endl;
             cout<<"Runs:"<<runs<<endl;

         }
     };
          class Footballer : public player{
              public:   
              int goals;
              void setgoals(int g)
              {
                goals=g;

              }
              void show(){
                cout<<"Name:"<<name<<endl;
                cout<<"Goals:"<<goals<<endl;

              }
            };
            int main(){
                int r,g;
            cin>>r>>g;
            cricketer c1;
            c1.setName("Virat");
            c1.setruns(r);
            c1.show();
            Footballer f1;
            f1.setName("Ronaldo");
            f1.setgoals(g);     
            f1.show();
            return 0;

            }