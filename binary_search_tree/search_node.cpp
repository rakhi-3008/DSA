#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root==NULL){
        root= new Node(val);
        return root;
    }

    if(val<root->data){
        root->left=insertBST(root->left, val);
    }else{
        root->right=insertBST(root->right, val);
    }

    return root;
}

Node* buildBST(int arr[], int n){
    Node* root=NULL;

    for(int i=0; i<n; i++){
        root=insertBST(root, arr[i]);
    }

    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data>key){
        return search(root->left, key);
    }else{
        return search(root->right, key);
    }
    return false;
}

int main(){
    int arr[6]={5, 1, 3, 4, 2, 7};

    Node* root=buildBST(arr, 6);
    inorder(root);
    cout<<endl;

    cout<<search(root, 2);

    return 0;
}