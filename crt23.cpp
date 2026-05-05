//wap with default argument and calling it with or without parameter
#include <iostream>
using namespace std;
int  add(int a=10, int b=20){
    return a+b;
}
int main(){
    cout<<"Sum with default arguments: "<<add()<<endl;
    cout<<"Sum with custom arguments (5, 15): "<<add(5, 15)<<endl;
    cout<<"Sum with one custom argument (5): "<<add(5)<<endl; 
    return 0;
}



