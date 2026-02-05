#include<iostream>
#include<vector>
using namespace std;

//using vector
class Stack{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }

    bool isEmpty(){
        if(vec.size()==0){
            return true;
        }else{
            return false;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        vec.pop_back();
    }

    int top(){
        int lastIdx=vec.size()-1;
        return vec[lastIdx];
    }
};

int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}

