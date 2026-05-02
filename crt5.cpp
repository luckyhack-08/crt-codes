//find sum of n integer using break statement


#include <iostream>
using namespace std;
int main(){
    int sum=0;
    while(true){
        int n;
        cout<<"Enter no"<<endl;
        cin>>n;
        if(n<0){
            break;

        }
 sum=sum+n;

    }

    cout<<"Sum is ="<<sum<<endl;
    return 0;
}