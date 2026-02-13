#include<iostream>
#include<stack>
using namespace std;

class Queue1{    //FIFO
    stack<int> s1;
    stack<int> s2;
public:
    void push(int data){    //O(n)
        //s1->s2;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(data);

        //s2->s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop(){     //O(1)
        s1.pop();  
    }

    int front(){    //O(1)
        return s1.top();
    }

    bool empty(){   //O(1)
        return s1.empty();
    }
};

class Queue2{    //FIFO
    stack<int> s1;
    stack<int> s2;
public:
    void push(int data){    //O(1)
        s1.push(data);
    }

    void pop(){     //O(n)
        if(s1.empty()){
            cout << "Queue is empty\n";
            return;
        }
        //s1->s2  
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s2.pop();

        //s2->s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int front(){    //O(n)
        if(s1.empty()){
            cout << "Queue is empty\n";
            return -1;
        }
        //s1->s2  
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        int ans=s2.top();

        //s2->s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }

        return ans;
    }

    bool empty(){   //O(1)
        return s1.empty();
    }
};

int main(){
    Queue1 q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    Queue2 q2;

    q2.push(1);
    q2.push(2);
    q2.push(3);
    q2.push(4);

    while(!q2.empty()){
        cout<<q2.front()<<endl;
        q2.pop();
    }

    return 0;
}