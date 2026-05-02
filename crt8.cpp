#include <iostream>
using namespace std;
int main(){
     char var;
     cin>>var;
     switch (var)
     {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
      cout<<"vowel"<<endl;
        break;
     
     default:
     cout<<"Consonent";
        break;
     }
    
     }