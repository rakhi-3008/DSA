#include<iostream>
#include<cstring>
using namespace std;

void toLower(char word[], int n){
    for(int i=0; i<n; i++){
        char ch=word[i];
        if(word[i]>='a' && word[i]<='z'){
            continue;
        }else{
            // word[i]=ch-'A'+'a';
            word[i]=word[i]+32;
        }
    }  
}

int main(){
    char word[]="rAkHiPaNwAr";
    toLower(word, strlen(word));

    cout<<word;
    return 0;
}