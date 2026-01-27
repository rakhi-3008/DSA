#include<iostream>
#include<string>
using namespace std;

void permutations(string str, int k, int n){
    if(k==n){
        cout<<str<<endl;
        return;
    }
    for(int i=k; i<str.size(); i++){
        swap(str[i], str[k]);
        permutations(str, k+1, n);
        swap(str[i], str[k]);
    }
}

int main(){
    string str="abc";

    permutations(str, 0, str.size());

    return 0;

}