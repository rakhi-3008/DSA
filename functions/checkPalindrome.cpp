#include<iostream>
using namespace std;

void checkPalindrome(int num){
    int rem=0, rev=0, ispalindrome=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(ispalindrome==rev){
        cout<<"entered number is palindrome\n";
    }
    else{
        cout<<"entered number is not palindrome\n";
    }
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    checkPalindrome(n);    
}