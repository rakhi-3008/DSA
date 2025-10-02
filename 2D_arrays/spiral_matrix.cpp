#include<iostream>
using namespace std;

void spiralMatrix(int arr[][4], int n, int m){
    int srow=0, scol=0, erow=n-1, ecol=n-1;
    while(srow<=erow && scol<=ecol){
        //top
        for(int j=scol; j<=ecol; j++){
            cout<<arr[srow][j]<<" ";
        }
        //right
        for(int i=srow+1; i<=erow; i++){
            cout<<arr[i][ecol]<<" ";
        }
        //bottom
        for(int j=ecol-1; j>=scol; j--){
            cout<<arr[erow][j]<<" ";
            if(srow==erow){
                break;
            }
        }
        //left
        for(int i=erow-1; i>=srow+1; i--){
            cout<<arr[i][scol]<<" ";
            if(scol==ecol){
                break;
            }
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main(){
    int matrix[4][4]={{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    spiralMatrix(matrix, 4, 4);
}