#include<iostream>
using namespace std;

void counter(){
    int count =0;
    count++;
    cout<<count<<endl;
}

void counterStatic(){
    static int count=0;
    count++;
    cout<<count<<endl;
}

class Example{
public:
    int x=0;
};

class ExampleStatic{
public:
    static int x;
    // static const int x=0;
};

int ExampleStatic::x=0;

int main(){
    counter();
    counter();
    counter();

    counterStatic();
    counterStatic();
    counterStatic();

    Example eg1;
    Example eg2;
    Example eg3;

    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;

    ExampleStatic s1;
    ExampleStatic s2;
    ExampleStatic s3;

    cout<<s1.x++<<endl;//0
    cout<<s2.x++<<endl;//1
    cout<<s3.x++<<endl;//2

    return 0;
}