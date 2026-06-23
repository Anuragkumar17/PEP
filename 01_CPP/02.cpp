#include <iostream>
using namespace std;

// void doublethevalue(int num){ //(int &num){  - We use & to pass by reference when we want to make changes to the original variable
//     num = num*2;
//     cout<<"Inside : "<<num<<endl;
// }

int main(){
    // // Pass by value & Pass by reference
    // int num =10;
    // doublethevalue(num);
    // cout<<"Outside : "<<num<<endl;

    //Pointers
    int a = 10;
    int *p = &a;  
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<p<<endl;
    cout<<*p+1<<endl;
    cout<<*(p+1)<<endl;

    //Constructors Method
    //It have same name as class name , it does not have any return type and it is automatically invoked when an object of class is created.
    class Node{
        public:
        int data;
        Node *next;
        Node(int val){
            data = val;
            next = NULL;
        }
    };
    Node *head = new Node(10); //Object
}
