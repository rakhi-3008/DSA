#include<iostream>
using namespace std;

int main(){
    // int array[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // cout<<array[2][2];

    int rows, cols;
    cout<<"enter numbers of rows and columns respectively: ";
    cin>>rows>>cols;
    int array[rows][cols];
    cout<<"enter elements of 2d array\n";

    //input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>array[i][j];
        }
    }

    //output
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}