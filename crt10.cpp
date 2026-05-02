#include <iostream>
using namespace std;
int main(){
int amt=50000;
int withdraw;
cout<<"Enter withdrawl amount";
cin>>withdraw;
if(amt>=withdraw){
    cout<<"Transaction is valid";
}
else {
    cout<<"Transaction is invalid";
}
}