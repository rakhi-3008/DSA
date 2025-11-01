#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1;
    cout<<vec1.size()<<endl;

    vector<int> vec2={1, 2, 3, 4, 50};
    cout<<vec2.size()<<endl;

    vector<int> vec3(10, -1);       //fill constructor(size, intialization for all indexes)
    cout<<vec3.size()<<endl;

    for(int i=0; i<vec3.size(); i++){
        cout<<vec3[i]<<" ";
    }
    cout<<endl;

    return 0;
}