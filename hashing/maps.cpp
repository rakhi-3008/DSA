#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m; //ascending order

    m["india"]=150;
    m["china"]=150;
    m["us"]=30;
    m["uk"]=10;

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