#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

//inorder recursive  left subtree-->root-->right subtree
//1. Traverse the left sub-tree in inorder. 
//2. Visit the root.
//3. Traverse the right sub-tree in inorder

void inorderTraversal(node* p){
    if(p!=NULL){
        inorderTraversal(p->left);
        cout<<p->data<<" ";
        inorderTraversal(p->right);
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

    inorderTraversal(root);

    return 0;
}