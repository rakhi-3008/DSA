#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }   
};

class List{

public:

    Node* head;
    Node* tail;

    List(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode= new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next= head;
            head= newNode;
        }
    }

    void push_back(int val){
        Node* newNode= new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
};

void printList(Node* head){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
}

bool isCycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"cycle exists"<<endl;
            return true;
        }
    }
    cout<<"cycle does't exist"<<endl;
    return false;
}

void removeCycle(Node* head){
    //detect cycle
    Node* slow=head;
    Node* fast=head;
    bool isCycle=false;

    while (fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            cout<<"cycle exist"<<endl;
            isCycle=true;
            break;
        }
    }

    if(!isCycle){
        cout<<"cycle doesn't exists"<<endl;
        return;
    }
    
    slow=head;
    if(slow==fast){//special case: tail->head
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=NULL; //remove cycle
    }else{
        Node* prev=fast;
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;    //remove cycle
    }
}

int main(){
    List ll;
    
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next=ll.head; //1->2->3->4->1

    removeCycle(ll.head);
    printList(ll.head);

    // cout<<isCycle(ll.head);
    return 0;
}
