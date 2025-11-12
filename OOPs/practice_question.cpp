#include<iostream>
using namespace std;

class User{
    int id;
    string password;
public:
    string username;
    
    User(int id){
        this->id=id;
    }
    //setter
    void setPassword(string password){
        this->password=password;
    }
    string getPassword(){
        return password;
    }
};

int main(){
    User u1(81);
    u1.username="rakhi panwar";
    u1.setPassword("rakhi3030");

    cout<<"username: "<<u1.username<<endl;
    cout<<"password: "<<u1.getPassword()<<endl;
    
    return 0;
}