#include<iostream>
using namespace std;



//bubble sort
// void bubblesort(int arr[] , int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main( )
// {
//     int n = 6;
//     int arr[] = {10,1,7,6,14,9};

//     bubblesort(arr , n);
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }





//selection sort 
//   void selectionsort(int arr[] , int n){
//     for(int i=0; i<n; i++){
//         int miniindex = i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[miniindex]){
//                 miniindex = j;
//             }
//         }
//         // Swap the minimum element with the first element
//         int temp = arr[miniindex];
//         arr[miniindex] = arr[i];
//         arr[i] = temp;
//     }

//   }

//   int main(){
//     int n = 6;
//     int arr[] = {10 , 1 , 7 , 6 , 14 , 9};

//     selectionsort(arr , n);

//     // Print the sorted array
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
//   }






//insertion sort

// void insertionsort(int arr[] , int n){
//     for(int i=1; i<n; i++){
//         int key = arr[i];
//         int j = i-1;
//         while(j>=0 && arr[j] > key){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }

// int main(){
//     int n = 6;
//     int arr[] = {10 , 1 , 7 , 6 , 14 , 9};

//     insertionsort(arr , n);

//     // Print the sorted array
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
//   }






//recursion
//print 1 to 10

// void print(int n){
//     if(n==0){
//         return;
//     }

//     print(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     int n = 10;
//     print(n);
//     cout<<endl;
//     return 0;
// }






//print factorial number by using recursion 

// int factorial(int n){
//     if(n ==0){
//         return 1;
//     }

//     else{
//         return n*factorial(n-1);
//     }
// }

// int main(){
//     int n = 5;
//     cout<<factorial(n)<<endl;
//     return 0;
// }






//print fibonacci number by using recursion and also return fib(7)

// int fibonacci(int n){
//     if(n == 0){
//         return 0;
//     }

//     if(n == 1){
//         return 1;
//     }

//     else{
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }

// int main(){
//     int n = 10;
//     for(int i=0; i<n; i++){
//         cout<<fibonacci(i)<< " ";
//     }
//      cout<<endl;

//      cout<<"the value of fib of 7 is : "<<  fibonacci(7)<<endl;

//     return 0;
// }






//print sum of 12345 by using recursion 

int sum(int n){
    if(n==0){
        return 0;
    }

    return (n%10) + sum(n/10);
}

int main(){
    int n = 12345;
    cout<<"the sum of the digits of "<<n <<"is :"<<sum(n)<<endl;
    return 0;
}