#include <iostream>
using namespace std;

class MyQueue {
public:
    int* arr;
    int front;
    int rear;
    int size;

    MyQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~MyQueue() {
        delete[] arr;
    }

    void enqueue(int val) {

        if (rear == size - 1) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        arr[rear] = val;
    }

    void dequeue() {

        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }

        front++;

        // Queue becomes empty
        if (front > rear) {
            front = rear = -1;
        }
    }

    void getFront() {

        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Front = " << arr[front] << endl;
    }

    void getRear() {

        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Rear = " << arr[rear] << endl;
    }

    bool isEmpty() {
        return front == -1;
    }

    int queueSize() {

        if (front == -1)
            return 0;

        return rear - front + 1;
    }

    void display() {

        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    MyQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.getFront();
    q.getRear();

    cout << "Size = " << q.queueSize() << endl;

    q.dequeue();

    q.display();

    q.getFront();

    cout << "Is Empty? " << q.isEmpty() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Is Empty? " << q.isEmpty() << endl;

    q.dequeue();

    return 0;
}