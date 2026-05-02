#include <iostream>
using namespace std;
int main(){
    int percent;
    cout<<"Enter percentage";
    cin>>percent;
    if(percent>90){
        cout<<"A"<<endl;
    }
    else if(percent>=80 && percent<=90){
        cout<<"B"<<endl;
    }
    else if(percent>=70 && percent<=79){
        cout<<"C"<<endl;

    }
    else if(percent>=60 &&percent<=69){
        cout<<"D"<<endl;

    }
    else{
        cout<<"Fail";

    }
    return 0;
}