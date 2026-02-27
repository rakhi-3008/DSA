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

void preorder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);

    int currht=max(leftht, rightht)+1;

    return currht;
}
//O(n^2)
int dia1(Node* root){   
    if(root==NULL){
        return 0;
    }
    int currDia=height(root->left)+height(root->right)+1;   //O(n)
    int leftDia=dia1(root->left);
    int rightDia=dia1(root->right);

    return max(currDia, max(leftDia, rightDia));
}
//O(n)
pair<int, int> dia2(Node* root){
    if(root==NULL){
        return make_pair(0, 0);
    }
    pair<int, int> leftInfo=dia2(root->left);   //LD, LH
    pair<int, int> rightInfo=dia2(root->right);     //RD, RH

    int currDia=leftInfo.second+rightInfo.second+1;
    int finalDia=max(currDia, max(leftInfo.first, rightInfo.first));
    int finalHt=max(leftInfo.second, rightInfo.second)+1;

    return make_pair(finalDia, finalHt);
}

int main(){
    vector<int> nodes={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root=buildTree(nodes);

    cout<<"diameter of tree: "<<dia1(root)<<endl;
    cout<<"diameter of tree: "<<dia2(root).first<<endl;

    return 0;
}