#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
public:
    string key;
    int value;
    Node* next;

    Node(string key, int value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

class HashTable{
    int totalSize;
    int currSize;
    Node** table;

    int hashFunction(string key){
        int idx=0;
        for(int i=0; i<key.size(); i++){
            idx=idx+(key[i]*key[i])%totalSize;  //to prevent overflow
        }
        return idx%totalSize;
    }

    void rehash(){  //O(n)
        Node** oldTable = table;
        int oldSize = totalSize;

        totalSize = 2*totalSize;
        currSize=0;
        table = new Node*[totalSize];

        for(int i=0; i<totalSize; i++){
            table[i]=NULL;
        } 
        //copy old values
        for(int i=0; i<oldSize; i++){
            Node* temp = oldTable[i];
            while(temp!=NULL){
                insert(temp->key, temp->value);
                temp= temp->next;
            }
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

public:
    HashTable(int size=5){
        totalSize=size;
        currSize=0;
        table= new Node*[totalSize];

        for(int i=0; i<totalSize; i++){
            table[i]=NULL;
        }
    }

    void insert(string key, int value){     //O(1) avg case O(n) if hashing 
        int idx = hashFunction(key);

        Node* newNode = new Node(key, value);
        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        double lambda = currSize/(double)totalSize;
        if(lambda>1){
            rehash();   //O(n)
        }
    }

    bool exists(string key){
        int idx= hashFunction(key);
        Node* temp = table[idx];
        while(temp!=NULL){
            if(temp->key==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    int search(string key){
        int idx= hashFunction(key);
        Node* temp = table[idx];
        while(temp!=NULL){
            if(temp->key==key){
                return temp->value;
            }
            temp=temp->next;
        }
        return -1;
    }

    void remove(string key){
        int idx=hashFunction(key);
        Node* temp = table[idx];
        Node* prev=temp;
        while(temp!=NULL){
            if(temp->key==key){
                if(prev==temp){
                    table[idx]=temp->next;
                }else{
                    prev->next=temp->next;
                }
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    }

    void print(){
        for(int i=0; i<totalSize; i++){
            cout<<"idx"<<i<<"->";
            Node* temp = table[i];
            while(temp!=NULL){
                cout<<temp->key<<" , "<<temp->value<<" -> ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};

int main(){
    HashTable ht;

    ht.insert("india", 150);
    ht.insert("china", 150);
    ht.insert("us", 70);
    ht.insert("canada", 20);
    ht.insert("nepal", 50);

    if(ht.exists("india")){
        cout<<"india population: "<<ht.search("india")<<endl;
    }
    ht.print();

    ht.remove("china");
    ht.print();

    return 0;
}