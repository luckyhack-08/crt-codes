#include<iostream>
using namespace std;


//WAP that takes a temp value in celcius and input from user convert into celcius to ferenite 

// int main(){
//     int celcius;
//     int fahrenheit;

//     cout<<"enter the temp in celcius"<<endl;
//     cin>>celcius;

//     fahrenheit = (celcius * 1.8) + 32;

//     cout<<"temp in fahrenheit = "<<fahrenheit<<endl;
//     return 0;
// }





//convert data type into explicit type casting 

// int val = 100;
// int main(){
//   int a;
//   cout<<"enter the value of a"<<endl;
//   cin>>a;

//   int result;
//   result = (double)val/a;
//   cout<<result<<endl;
//   return 0;
// }





//WAP that takes 3 inputs form user to representing the sides of triangle , print true if triangle is equivalent triangle otherwise false used only relational and logical operators 
// int main(){
//     int a , b , c;
//     cout<<"enter the value of a , b and c"<<endl;
//     cin>>a;
//     cin>>b;
//     cin>>c;

//     if(a==b && a==c){
//         cout<<"triangle is equivalent"<<endl;
//     }

//     else{
//         cout<<"triangle is not equivalent";
//     }

//     return 0;
// }





//WAP that takes two integer input a and b multiply a by 4 using bitwise left shift operator , print the value of a 

// int main(){
//     int a , b;
//     cout<<"enter the value of a and b"<<endl;
//     cin>>a>>b;

//     a = a<<2;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }





//WAP that takes 2 number and operator as input from user perform the corresponding arithmetic opearation and print the result

// int main(){
//     int a , b;
//     char op;

//     cout<<"enter the value of a and b"<<endl;
//     cin>>a>>b;

//     cout<<"enter the operator"<<endl;
//     cin>>op;

//     switch(op){
//         case '+':
//         cout<<"sum = "<<a+b<<endl;
//         break;

//          case '-':
//         cout<<"difference = "<<a-b<<endl;
//         break;

//          case '*':
//         cout<<"product = "<<a*b<<endl;
//         break;

//          case '/':
//         cout<<"quotient = "<<a/b<<endl;
//         break;


//         default:
//         cout<<"invalid operator"<<endl;
//         break;
//     }

//     return 0;
// }





//WAP to swap there value using a temporary variable and print the updated value

// int main(){
//     int a , b;
//     int temp;

//     cin>>a>>b;
//     temp = a,
//     a = b,
//     b = temp;

//     cout<<a<<" "<<b<<endl;
//     return 0;
// }




//WAP that takes 3 input from user and calculate their total sum and average and print them 

// int main(){
//     int a , b , c;
//     cout<<"enter the value of a , b and c"<<endl;
//     cin>>a>>b>>c;

//     int sum = a+b+c;
//     float average = sum/3;

//     cout<<"sum ="<<sum<<endl;
//     cout<<"average ="<<average<<endl;

//     return 0;
// }




//WAP to match username and passowrd 

// int main(){
//     string username , password;
//     cout<<"enter the username and password"<<endl;
//     cin>>username>>password;

//      if(username == "admin" && password == "password123"){
//         cout<<"login successful"<<endl;
//      }

//      else{
//         cout<<"login failed"<<endl;
//      }

//      return 0;

// }


 
//WAP that take input from user and check th letter is in uppercasee or lowercase 
int main(){
      char letter;
      cout<<"enter a letter"<<endl;
      cin>>letter;

      if(letter >= 'A' && letter <= 'Z'){
         cout<<"letter is in uppercase"<<endl;

      }

      else if(letter >= 'a' && letter <= 'z'){
         cout<<"letter is in lowercase"<<endl;
      }

      else{
         cout<<"invalid input"<<endl;
      }

      return 0;
}