#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vector<int> vec2={1, 2, 3, 4, 5};
    cout<<vec2.size()<<endl;
    cout<<vec2.capacity()<<endl;

    vec2.push_back(6);  //to add 
    cout<<vec2.size()<<endl;
    cout<<vec2.capacity()<<endl;    //double of previous capacity
    vec.pop_back(); //to delete

    for(int i=0; i<vec2.size(); i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl;

    return 0;
}