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

void helperPath(Node* root, vector<int> &path){
    if(root==NULL){
        return;
    }

    path.push_back(root->data);

    if(root->left==NULL && root->right==NULL){
        for(int i=0; i<path.size(); i++){
            cout<<path[i]<<" ";
        }
        cout<<endl;
        
    }else{
        helperPath(root->left, path);
        helperPath(root->right, path);
    }

    path.pop_back();
}

void rootToLeaf(Node* root){
    vector<int> path;

    helperPath(root, path);
}

int main(){
    int arr[6]={5, 1, 3, 4, 2, 7};

    Node* root=buildBST(arr, 6);

    rootToLeaf(root);

    return 0;
}