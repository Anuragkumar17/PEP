#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> v = {1, 2, 3, 4, 5};
    // cout << v[2] << endl; 
    // cout<<v.size()<<endl;
    // v.pop_back();
    // v.push_back(6);
    // v.clear();

    int arr[] = {12,32,21,1,55,26,77};
    int key = 53;
    int result = linerSearch(arr, 7, key);
    cout << result << endl;

    int sarr[]= {1,2,3,4,5,6,7,8,9};
    int skey = 5;
    int sresult = binarySearch(sarr, 9, skey);
    cout << sresult << endl;

}
int linerSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key && key>20){
            return 2*i;
        }
        else if(arr[i] == key && key<=20){
            return i/2;
        }
    }
    return -1;
}
int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}