#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str="rakhi";
    // cout<<str<<endl;
    // str="kajal chauhan";
    // cout<<str<<endl;

    string str;
    // cin>>str; stop at white space
    getline(cin, str);
    cout<<str<<endl;

    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<"-";
    }
    cout<<endl;

    for(char ch : str){ //for each loop
        cout<<ch<<"-";
    }
    cout<<endl;

    return 0;
}