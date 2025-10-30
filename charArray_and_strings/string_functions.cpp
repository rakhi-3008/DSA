#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="rakhi panwar";
    
    cout<<str.length()<<endl;
    cout<<str.at(7)<<endl;
    cout<<str.substr(6,6)<<endl;
    cout<<str.find("pan")<<endl;
    
    return 0;
}