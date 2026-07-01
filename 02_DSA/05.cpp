#include <iostream>
using namespace std;

void waveprint(int arr[][4], int row, int col){
    for(int c=0;c<col;c++){
        if(c%2==0){
            for(int r=0;r<row;r++){
                cout<<arr[r][c]<<" ";
            }
        }
        else{
            for(int r=row-1;r>=0;r--){
                cout<<arr[r][c]<<" ";
            }
        }
    }
}

void spiralPrint(int arr[][4], int row, int col){
    int tr=0, br=row-1, lc=0,rc=col-1;
    while(tr<=br && lc<=rc){
        for(int i=lc; i<=rc; i++){
            cout<<arr[tr][i]<<" ";
        }
        tr++;
        //print right col
        for(int i=tr; i<=br; i++){
            cout<<arr[i][rc]<<" ";
        }
        rc--;
        //print bottom row
        for(int i=rc;i>=lc;i--){
            cout<<arr[br][i]<<" ";
        }
        br--;
        //print left col
        for(int i=br;i>=tr;i--){
            cout<<arr[i][lc]<<" ";
        }
        lc++;
    }
}
int main()
{
    int arr[4][4] = {
        {6, 13, 12, 11},
        {45, 3, 6, 1},
        {6, 10, 12, 27},
        {5, 7, 9, 12}
    };
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //waveprint(arr, 4, 4);
    spiralPrint(arr, 4, 4);
    
}