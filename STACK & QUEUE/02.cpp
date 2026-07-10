//Queue using array.
#include <iostream>
using namespace std;

class MyQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    MyQueue(int size ){
        this->size=size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val){
        if(rear==size-1){
            cout<<"Queue Overflow";
            return;
        }
        if(front==-1){
            front++;
        }
        rear++;
        arr[rear] = val;
    }

    void dequeue(){
        if(front==-1 || front > rear){
            cout<<"Queue underflow";
            return;
        }
        front++;
    }

    void getFront(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[front];
    }
};

int main(){

}