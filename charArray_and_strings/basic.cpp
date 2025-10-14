#include <iostream>
using namespace std;

int main(){
    //char data type 1 byte
    // char ch1='a';
    // char ch2='Z';
    // char ch3='2';
    // char ch4='&';
    // char ch5='\n'; //single character for computer
    // cout<<(int)ch1<<endl;  //ascii value of 'a' is 97
    
    // char ch6='s';
    // int pos=ch6-'a';
    // cout<<pos<<endl;

    char arr[5]={'r', 'a', 'k', 'h', 'i'};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;

    cout<<arr<<endl;    //rakhi└␦@ becoz not terminate by '\0'
    char brr[6]={'r', 'a', 'k', 'h', 'i', '\0'};
    cout<<brr<<endl;    //complete string access

    char work1[]="code";
    cout<<work1<<endl;

    char work2[5]="code";   //also nullcharacter
    cout<<work2<<endl;

    char work3[]={'r', 'a', 'k', 'h', 'i', '\0'};
    cout<<work3<<endl;

    char work4[50]={'r', 'a', 'k', 'h', 'i', '\0'};     //if not ended by null character then it store garbage value
    cout<<work4<<endl;

    char word[10];
    cin>>word;      //take whole string as input and then store it in the form of char
    cout<<"your word was "<<word<<endl;

    char sentence[50];
    cin.getline(sentence, 50);
    cout<<"your sentence was "<<sentence;

    return 0;

}