#include<iostream>
using namespace std;

void func(int mat[][4], int n, int m){
    cout<<"0th row pointer "<<mat<<endl;
    cout<<"1st row pointer "<<mat+1<<endl;
    cout<<"2nd row pointer "<<mat+2<<endl;
    cout<<"3rd row pointer "<<mat+3<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
             cout<<(*(*(mat+i)+j))<<" "; //mat[i][j]
        }
        cout<<endl;
    }
    // cout<<(*(*(mat+2)+2)); //mat[2][2]
}

//void func(int (*mat)[4], int n, int m){}

int main(){
    int mat[4][4]={{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    
    cout<<mat<<endl; //points to first row
    cout<<&mat[0][0]<<endl;
    cout<<mat+1;  //updated by 16 becoz row size 4

    func(mat, 4, 4);
    return 0;
}