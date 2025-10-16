#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};
//dynamic implementation
node* insert(node* root, int value){
    if(root==NULL){
        root=new node();
        root->data=value;
        root->left=root->right=NULL;
    }else{
        if(value<=root->data){
            root->left=insert(root->left, value);
        }else{
            root->right=insert(root->right, value);
        }
    }
    return root;
}

int main(){
    int n;
    node* root=NULL;
    cout<<"enter number of nodes: ";
    cin>>n;
    int val;
    while(n>0){
        cout<<"enter data to insert: ";
        cin>>val;
        root=insert(root, val);
        n--;
    }
    root=insert(root, val);

    cout<<"data entered successfully !";

    return 0;
}