#include<iostream>
using namespace std;
class Queue{
    private:
    int arr[100];
    int front, rear;
    public:
    Queue(){
        front=0;
        rear= -1;

    }
void enqueue(int x){
    if(rear==99){
        cout<<"queue overflow"<<endl;
    }
    else{
        rear++;
        arr[rear]= x;
        cout<<x<<"inserted"<<endl;
        
    }
    }
    void dequeue(){
        if(front> rear){
            cout<<"queue underflow"<<endl;

        }
        else{
            cout<<arr[front]<<"deleted"<<endl;
            front++;
        }
    }
    void peek(){
        if(front> rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"front element is "<<arr[front]<<endl;
        }
    }
    void  display(){
        if (front>rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"queue elements :";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        }
    };
    int main(){
        Queue q;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);

        q.display();

        q.dequeue();
         
        q.peek();

        return 0;

    }

