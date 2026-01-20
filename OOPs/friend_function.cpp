#include<iostream>
using namespace std;

class A{
    string secret="secret data";
    friend class B;
    friend void revealSecret(A &obj);
};

class B{    //becomes a friend class of A
public:
    void showsecret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    A obj1;
    B obj2;
    obj2.showsecret(obj1);
    revealSecret(obj1);
    
    return 0;
}

