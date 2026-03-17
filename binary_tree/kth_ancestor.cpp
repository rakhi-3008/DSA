#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

static int idx=-1;

Node* buildTree(vector<int> nodes){  //using recursion
    idx++;
    if(nodes[idx]== -1){
        return NULL;
    }

    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode;
}

int kthAncestor(Node* root, int n, int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==n){
        return 0;
    }

    int leftDis=kthAncestor(root->left, n, k);
    int rightDis=kthAncestor(root->right, n, k);

    if(leftDis==-1 && rightDis==-1){
        return -1;
    }

    int validVal=leftDis==-1 ? rightDis : leftDis;

    if(validVal+1==k){
        cout<<"kthAncestor: "<<root->data;
    }

    return validVal+1;
}


int main(){
    vector<int> nodes={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root=buildTree(nodes);
    int n=5, k=2;

    kthAncestor(root, n, k);
    return 0;
}