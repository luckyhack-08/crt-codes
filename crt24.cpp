//waf that apply  10 percent discount using refrences update the original  bill amount and print the discounted bill amount
#include <iostream>     
using namespace std;
void applyDiscount(double &billAmount) {
    billAmount *= 0.9
    ; 
}
int main() {
    double billAmount;
    cout << "Enter the original bill amount: ";
    cin >> billAmount;

    applyDiscount(billAmount); 

    cout << "Discounted bill amount: " << billAmount << endl;
    return 0;
}



