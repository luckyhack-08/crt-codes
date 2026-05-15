#include<iostream>
using namespace std;
bool power(int x){
    if (x==0){return false;}
     if(x==1){return true;}

        return(x%2==0)&&power(x/2);
    }

int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    if(power(x)){
        cout<<x<<" is a power of 2."<<endl;
    }
    else{
        cout<<x<<" is not a power of 2."<<endl;
    }
    
}