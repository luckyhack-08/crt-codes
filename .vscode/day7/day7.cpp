 #include <iostream>
 using namespace std;

// class Cricketers
// {
//     string name;
//     int runs;

// public:
//     // Parameterized constructor
//     Cricketers(string name, int r)
//     {
//         this->name = name;
//         runs = r;
//     }

//     // copy constructor
//     Cricketers(const Cricketers &c)
//     {
//         this->name = c.name;
//         this->runs = c.runs;
//     }
//     void show()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Runs: " << runs << endl;
//     }
// };

// int main()
// {
//     Cricketers c1("Virat", 12000);
//     c1.show();
//     Cricketers c2(c1);
//     c2.show();
//     return 0;
// }



//inheritance (Single inheritance)



//     class player
//     {
//         public:
//         string name;
//        

//         void setName(string n){
//             name =n;

//         }
//     };
//     class cricketer : public player{
//      public:
//         int runs;
//         void setruns(int r){
//             runs=r;

//         }
//         void show(){
//             cout<<"Name:"<<name<<endl;
//             cout<<"Runs:"<<runs<<endl;

//         }
//     };
//     int main(){
// int r;
// cin>>r;
// cricketer c1;
// c1.setName("Virat");    
// c1.setruns(r);
// c1.show();
// return 0;
//     }


//multilevel inheritance    
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