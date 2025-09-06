//block of code which runs when it is called

//declaration ->the function's name, return type, and parameters(if any)

//definition ->the body of the function

#include<iostream>
using namespace std;

// void greet();        forward declartion

void greet(){       //declaration
    cout<<"Good morning\n";     //defition         
}

int sum(int a, int b){      //function with parameters 
    int sum=a+b;
    return sum;
}

int diff(int a, int b=20){      //default parameters
    int diff=a-b;
    return diff;
}

int prod(int a, int b){
    int prod=a*b;
    return prod;
}

bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int fact(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

bool isPrime(int n){

    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int binomialCoeff(int n, int r){
    
    int c=fact(n)/(fact(r)*fact(n-r));

    return c;
}

int a=10;       //global variable
int main(){
    greet();  // function call

    int s=sum(10, 20);      //10, 20 are parameters
    int d=diff(10);
    int p=prod(10, 20);
    int e=isEven(100);
    int f=fact(5);
    int prime=isPrime(23);
    int bino=binomialCoeff(6, 3);
    cout<<"sum: "<<s<<endl;
    cout<<"diff: "<<d<<endl;
    cout<<"product: "<<p<<endl;
    cout<<"even: "<<e<<endl;
    cout<<"fact: "<<f<<endl;
    cout<<"isPrime: "<<prime<<endl;
    cout<<"binomial: "<<bino<<endl;

    return 0;
}