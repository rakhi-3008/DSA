#include<iostream>
using namespace std;

class Example{
public:
    Example(){
        cout<<"constructor...";
    }

    ~Example(){
        cout<<"destructor...";
    }
};

int main(){
    int i=0;
    if(i==0){
        Example eg1;
        // static Example eg1;
    }

    cout<<"code ending...";
    return 0;
}
