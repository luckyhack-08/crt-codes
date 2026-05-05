#include <iostream>
using namespace std;

// Function with arguments and return type
int add(int a, int b) {
    return a + b;
}

// Another example: calculate square
double square(double num) {
    return num * num;
}

int main() {
    int result1 = add(5, 10);
    cout << "Sum of 5 and 10: " << result1 << endl;
    
    double result2 = square(4.5);
    cout << "Square of 4.5: " << result2 << endl;
    
    return 0;
}