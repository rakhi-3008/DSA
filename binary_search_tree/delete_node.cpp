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

Node* getInorderSuccessor(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;    //IS
}

Node* delNode(Node* root, int val){
    if(root==NULL){
        return NULL;
    }
    if(val<root->data){
        root->left=delNode(root->left, val);
    }else if(val>root->data){
        root->right=delNode(root->right, val);
    }else{
        //root->data==val
        //case1: 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //case2: 1 child
        if(root->left==NULL || root->right==NULL){
            return root->left==NULL ? root->right : root->left;
        }
        //case3: 2 children
        Node* IS=getInorderSuccessor(root->right);
        root->data=IS->data;
        root->right=delNode(root->right, IS->data);
        return root;
    }

    return root;
}

int main(){
    int arr[6]={5, 1, 3, 4, 2, 7};

    Node* root=buildBST(arr, 6);
    inorder(root);
    cout<<endl;
    
    delNode(root, 3);

    inorder(root);

    return 0;
}