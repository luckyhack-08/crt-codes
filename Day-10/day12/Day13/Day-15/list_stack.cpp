#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }


};
 
class Stack{
    Node* top;

    public:
    Stack(){
        top = NULL;
    }

    void push(int element){
        Node* newNode = new Node(element);
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(top == NULL){
            cout<<"stack underflow"<<endl;
        }

        else{
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        } else{
            return top->data;
        }
    }

    bool isempty(){
        return (top == NULL);
    }
};

int main(){
    Stack st;

    st.push(22);
    st.push(23);

    st.push(20);
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    return 0;


}