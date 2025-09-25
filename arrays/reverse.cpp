#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array[]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(int);
    int tempArr[n];

    printArray(array, n);

    //with extra space  space complexity=O(n)

    // for(int i=0; i<n; i++){
    //     int j=n-i-1;
    //     tempArr[i]=array[j];
    // }

    // for(int i=0; i<n; i++){
    //     array[i]=tempArr[i];
    // }

    //without extra space  space complexity=O(1)

    int st=0, end=n-1;
    while(st<=end){
        int temp=array[st];
        array[st]=array[end];
        array[end]=temp;
        st++;
        end--;
    }

    printArray(array, n);
    return 0;
}