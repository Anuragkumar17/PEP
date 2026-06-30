#include <iostream>
using namespace std;
void printEvenCol(int arr[][4], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j%2==0){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j]; // row wise input
        }
    }
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[j][i]<<" "; // column wise output
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" "; // row wise output
        }
        cout<<endl;
    }
    printEvenCol(arr, 3, 4);
}