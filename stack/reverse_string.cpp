#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reverseString(string str){
    string ans; //sc O(n)
    stack<char> s;

    for(int i=0; i<str.size(); i++){    //O(n) TC 
        s.push(str[i]);
    }

    while(!s.empty()){      //O(n) TC
        char top=s.top();
        ans+=top;
        s.pop();
    }

    return ans;
}

int main(){
    string str="rakhipanwar";
    cout<<"reverse="<<reverseString(str)<<endl;

    return 0;
}