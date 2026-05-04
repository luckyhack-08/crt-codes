// wap to construct a fibonnaci series 
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter value of n"<<endl;
cin>>n;
int x=0;
int y=1;
for(int i=1; i<=n; i++){
cout<<x<<" ";
int z=x+y;
x=y;
y=z;
}
return 0;
}