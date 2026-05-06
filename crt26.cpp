//wap that  takes lenght and  wedth as input and returns area of rectangle
#include<iostream>
using namespace std;        
int arearectangle(int l,int w)
{
    int area = l*w;
return area;
}
int main()
{
    int length,width;
    cout<<"Enter lenght and width of rectangle";
    cin>>length>>width;
    int area = arearectangle(length,width); 
    cout<<"Area of rectangle is "<<area;
    return 0;
    
}