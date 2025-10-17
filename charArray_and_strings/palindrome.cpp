#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char arr[], int n){
    int st=0, end=n-1;
    while(st<end){
        if(arr[st++]!=arr[end--]){
        return false;
        }
    }
    return true;
}

int main(){
    char arr[]="rakhipanwar";
    bool ispalindorme=checkPalindrome(arr, strlen(arr));
    if(ispalindorme){
        cout<<"valid palindrome"<<endl;
    }else{
        cout<<"not vaild palindrome"<<endl;
    }
    return 0;
}