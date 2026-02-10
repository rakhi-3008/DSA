#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool validParenthesis(string str){
    stack<int> s;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }else{
            if(s.empty()){
                return false;
            }else{
                int top=s.top();

                if((top=='(' && ch==')') || 
                (top=='{' && ch=='}') || 
                (top='[' && ch==']')){
                    s.pop();
                }else{
                return false;
                }
            }
        }
    }
    return s.empty();
}

int main(){
    string str1="({[{]})";
    string str2="({([])})";

    cout<<validParenthesis(str1)<<endl;
    cout<<validParenthesis(str2)<<endl;
    
    return 0;
}