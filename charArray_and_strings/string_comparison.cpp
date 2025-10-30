#include<iostream>
using namespace std;

int main(){
    string str1="anagram";
    string str2="nagaram";
    
    cout<<(str1==str2)<<endl;   //false -> 0
    cout<<(str1!=str2)<<endl;   //true -> 1
    cout<<(str1<str2)<<endl;    //true -> 1
    cout<<(str1>str2)<<endl;    //false -> 0

    return 0;
}

// in char array not directly compare