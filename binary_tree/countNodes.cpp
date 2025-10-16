#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

//using recursion
int countNodes(node* root){
    if(root==NULL){
        return 0;
    }else{
        return countNodes(root->left)+1+countNodes(root->right);
    }
}

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
    node* root=NULL;
    int n;
    cout<<"enter number of nodes: ";
    cin>>n;
    int val;
    while(n!=0){
        cout<<"enter value to insert: ";
        cin>>val;
        root=insert(root, val);
        n--;
    }

    int num=countNodes(root);
    cout<<"number of nodes in binary tree are: "<<num<<endl;

    return 0;
}