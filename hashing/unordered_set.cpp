#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(0);
    s.insert(10);
    s.insert(1);    //duplicate values not inserted again
    s.insert(1);
    
    cout<<s.size()<<endl;

    s.erase(3);
    if(s.find(3)!=s.end()){
        cout<<"3 exists"<<endl;
    }else{
        cout<<"3 doesn't exist"<<endl;
    }

    for(auto el : s){
        cout<<el<<endl;
    }
    return 0;
}