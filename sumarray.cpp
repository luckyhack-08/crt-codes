#include<iostream>
using namespace std;
class sum
{public:
    int SumOfArray(int nums[], int n)
    {
        int sum=0;
        for (int i=0;i<n;i++){
            sum+=nums[i];

        }
        return sum;
    }
};
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    sum s;
    cout<<"Sum of Array :"<<s.SumOfArray(arr,size)<<endl;
    return 0;
}