#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int, string> m;
    
    m[101]="ram";
    m[102]="sam";
    m[103]="ram";
    cout<<m[101]<<endl;

    m[101]="rajat";
    cout<<m[101]<<endl;

    cout<<m.count(102)<<endl;
    cout<<m.count(104)<<endl;

    for(auto it: m){
        cout<<it.first<<","<<it.second<<endl;
    }

    return 0;
}