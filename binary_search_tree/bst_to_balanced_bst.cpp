#include<iostream>
#include<vector>
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

void getInorder(Node* root, vector<int> &nodes){
    if(root==NULL){
        return;
    }

    getInorder(root->left, nodes);
    nodes.push_back(root->data);
    getInorder(root->right, nodes);
}

Node* buildBSTfromSortedVector(vector<int> arr, int st, int end){
    if(st>end){
        return NULL;
    }
    int mid=st+(end-st)/2;

    Node* curr= new Node(arr[mid]);

    curr->left=buildBSTfromSortedVector(arr, st, mid-1);
    curr->right=buildBSTfromSortedVector(arr, mid+1, end);

    return curr;
}

Node* balancedBST(Node* root){
    //get inorder sequence
    vector<int> nodes;
    getInorder(root, nodes);

    root=buildBSTfromSortedVector(nodes, 0, nodes.size()-1); 
    return root; 
}

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


void preorder(Node* root){
    if(root==NULL){
        return;
    }   

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int arr[7]={3, 4, 5, 6, 7, 8, 9};
    Node* root=buildBST(arr, 7);

    root=balancedBST(root);

    preorder(root);

    return 0;
}