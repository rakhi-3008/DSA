#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;

// * 
// * * 
// * * *
// * * * *
// * * * * *   n=5

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

// * * * * *
// * * * *
// * * *
// * *
// *  n=5

    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

// 1
// 12
// 123
// 1234
// 12345  n=5

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    cout<<endl;

// A
// BC
// DEF
// GHIJ
// KLMNO  n=5

    char val= 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<val;
            val++;
        }
        cout<<endl;
    }
    cout<<endl;

// * * * * * *
// *         *
// *         *
// *         *
// * * * * * *  n=5

    for(int i=0; i<n; i++){
        cout<<"* ";
        for(int j=0; j<n-1; j++){
            if(i==0 || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"* "<<endl;
    }
    cout<<endl;

//     *
//    **
//   ***
//  ****
// ***** n=5

    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15   n=5

    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;

//     *
//    ***
//   *****
//  *******
// *********  n=5

    //1st pyramid
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

// *********
//  *******
//   *****
//    ***
//     *     n=5

    //2nd pyramid
    for(int i=n; i>0; i--){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

// *        *
// **      **
// ***    ***
// ****  **** 
// **********   n=5

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

// **********
// ****  ****
// ***    ***
// **      **
// *        *  n=5

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

// 1
// 01
// 010
// 1010
// 10101  n=5

    bool value=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<value;
            value=!value;
        }
        cout<<endl;
    }
    cout<<endl;

//     *****
//    *****
//   *****
//  *****
// *****  n=5

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

//     1
//    212
//   32123
//  4321234
// 543212345  n=5

    for(int i=0; i<n; i++){
        int m=2;
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        int k=i;
        for(int j=0; j<=i; j++){
            cout<<k+1;
            k--;
        }
        for(int j=0; j<=i-1; j++){
            cout<<m;
            m++;
        }
        cout<<endl;
    }
    return 0;
}