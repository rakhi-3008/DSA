#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

//postorder recursive  left subtree-->right subtree-->root
//1. Traverse the left sub-tree in post-order. 
//2. Traverse the right sub-tree in post-order. 
//3. Visit the root.


void postorderTraversal(node* p){
    if(p!=NULL){
        postorderTraversal(p->left);
        postorderTraversal(p->right);
        cout<<p->data<<" ";
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

    postorderTraversal(root);

    return 0;
}