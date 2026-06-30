// Recursion 
// Factorial of a number using recursion
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
bool linearSearch(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    return linearSearch(arr+1, size-1, key);
}
int binarySearch(int arr[], int left, int right, int key){
    if(left > right){
        return -1;
    }
    int mid = left + (right-left)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key){
        return binarySearch(arr, mid+1, right, key);
    }
    else{
        return binarySearch(arr, left, mid-1, key);
    }

}
int main(){
    int n;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int key=7;
    int size = sizeof(arr)/sizeof(arr[0]);
    linearSearch(arr, size, key) ? cout<<"Found"<<endl : cout<<"Not Found"<<endl;
    binarySearch(arr, 0, size-1, key) != -1 ? cout<<"Found"<<endl : cout<<"Not Found"<<endl;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}