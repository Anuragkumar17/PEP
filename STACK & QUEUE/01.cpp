#include <iostream>
using namespace std;

//Stack using array
class myStack{
    public:
    int *arr;
    int top;
    int size;
    myStack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(top==size-1){
            cout<< "Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<< "Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    bool isEmpty(){
        return top == -1;
    }
    int peek(){
        if(top==-1){
            cout<< "Stack Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    int stackSize(){
        if(top==-1){
            cout<< "Stack Empty"<<endl;
            return -1;
        }
        return top+1;
    }
};

int main() {
    myStack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.peek() << endl;        // 30
    cout << s1.stackSize() << endl;   // 3

    s1.pop();

    cout << s1.peek() << endl;        // 20
    cout << s1.stackSize() << endl;   // 2

    cout << s1.isEmpty() << endl;     // 0 (false)

    return 0;
}