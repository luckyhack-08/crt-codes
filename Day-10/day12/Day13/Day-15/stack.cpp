#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

public: 
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty() {
        return (top == -1);
    }
};

int main() {
    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(20);

    cout << st.peek() << endl; 

    st.pop();
    cout<< st.peek()<<endl;
    return 0;
}