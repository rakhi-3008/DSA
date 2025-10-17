#include<iostream>
#include<cstring>
using namespace std;

void reverse(char arr[], int n){
    int st=0, end=n-1;
    while(st<end){
        swap(arr[st++],arr[end--]);
    }
}

int main(){
    char arr[]="rakhipanwar";
    reverse(arr, strlen(arr));
    cout<<"reverse string is: "<<arr;   //rawnapihkar
    return 0;
}