#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="Hello";
    string str2="JECRC";
    cout<<str1<<" "<<str2<<endl;

    //length of string
    int n=str1.length();
    cout<<"Length of string :"<<n<<endl;
    //append string
    cout<<"After appending:"<<str1.append("Students")<<endl;
    //empty  string
    cout<<"Is string empty"<<str2.empty()<<endl;
    //concatination
    cout<<"After concatination:"<<str1+"bacho"<<endl;
    //push back
    str1.push_back('s');
    cout<<"After push back:"<<str1<<endl;
    //pop back
    str1.pop_back();
    cout<<"After pop back:"<<str1<<endl;
    //find 
    int index =str1.find("ello");
    cout<<"Index of 'ello' is:"<<index<<endl;
     // at method. str1[1];
    char ch = str1.at(1);
    cout << "Character at index 1 in str1:" << ch << endl;
    // swap() method
    str1.swap(str2);
    cout << "After swapping str1 and str2:" << endl;
    cout << "str1: " << str1 << endl; // Jecrc
    cout << "str2: " << str2 << endl; // Hellostudents

    // substr() method
    string subStr = str2.substr(5, 6); // 5 is index and 6 is total length of substring
    cout << "Substring of str2 from index 5 with length 6:" << subStr << endl;

    // getline() method
    string str3;
    // cin >> str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;

    return 0;

}