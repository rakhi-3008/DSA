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

void printInRange(Node* root, int start, int end){
    if(root==NULL){
        return;
    }
    if(root->data>=start && root->data<=end){
        printInRange(root->left, start, end);
        cout<<root->data<<" ";
        printInRange(root->right, start, end);
    }else if(root->data<start){
        printInRange(root->right, start, end);
    }else{
         printInRange(root->left, start, end);
    }
}

int main(){
    int arr[6]={5, 1, 3, 4, 2, 7};

    Node* root=buildBST(arr, 6);
    
    printInRange(root, 3, 7);

    return 0;
}