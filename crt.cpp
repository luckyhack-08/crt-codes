//find eligibility for voting

#include <iostream>
using namespace std;
int main(){
int age;
cout<<"Enter Age";
cin>>age;
if(age>=18&&age<=99)
{
cout<<"Eligible to Vote"<<endl;
}
    else if(age>=100){
        cout<<"Senior citizon"<<endl;
    }
    else if(age>=0 && age<=17){
        cout<<"Not eligible to vote"<<endl;

    }
    else
    {
        cout<<"Invalid"<<endl;
    }

return 0;
}