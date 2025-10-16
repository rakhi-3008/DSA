#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

//preorder recursive  root-->left subtree-->right subtree
//1. Visit the root.
//2. Traverse the left sub-tree in pre-order.
//3. Traverse the right sub-tree in pre-order.

void preorderTraversal(node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preorderTraversal(p->left);
        preorderTraversal(p->right);
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

    preorderTraversal(root);

    return 0;
}