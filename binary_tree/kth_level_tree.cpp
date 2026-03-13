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

void kthHelper(Node* root, int k, int currLevel){
    if(root==NULL){
        return;
    }

    if(currLevel==k){
        cout<<root->data<<" ";
        return;
    }

    kthHelper(root->left, k, currLevel+1);  //left
    kthHelper(root->right, k, currLevel+1);  //right
}

void kthLevel(Node* root, int k){
    kthHelper(root, k, 1);  //root ka level pass karenge
}

int main(){
    vector<int> nodes={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root=buildTree(nodes);
    cout<<"root = "<<root->data<<endl;

    kthLevel(root, 3);

    return 0;
}