#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char word[], int n){
    for(int i=0; i<n; i++){
        char ch=word[i];
        if(word[i]>='A' && word[i]<='Z'){
            continue;
        }else{
            // word[i]=ch-'a'+'A';
            word[i]=word[i]-32;
        }
    }   
}

int main(){
    char word[]="rAkHiPaNwAr";
    toUpper(word, strlen(word));

    cout<<word;
    return 0;
}