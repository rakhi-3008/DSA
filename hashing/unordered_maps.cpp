#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m["india"]=150;
    m["china"]=150;
    m["us"]=30;

    cout<<m["india"]<<endl;

    for(pair<string, int> country : m){
        cout<<country.first<<" , "<<country.second<<endl;
    }

    if(m.count("us")){
        cout<<"us exists"<<endl;
    }else{
        cout<<"us doesn't exist"<<endl;
    }

    m.erase("us");

    if(m.count("us")){
        cout<<"us exists"<<endl;
    }else{
        cout<<"us doesn't exist"<<endl;
    }
    
    return 0;
}