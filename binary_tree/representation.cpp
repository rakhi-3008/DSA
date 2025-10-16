#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int value){
        data=value;
        left=right=NULL;
    }
};

int main(){
    node* root=new node(1);
    
    root->left=new node(2);

    root->right=new node(3);
    root->left->right=new node(4);

    cout<<"binary tree created sucessfully.";

    return 0;
}
