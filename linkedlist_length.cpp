#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *Next;

    Node(int val){
        value=val;
        Next=NULL;
    }
};

void insertAtTail(Node *&head, int val){

    Node *newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=newNode;

}


void insertAtHead(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->Next=head;
    head=newNode;

}

void display(Node *n){

    while(n!=NULL){
        cout<<n->value;
        if(n->Next!=NULL)
        cout<<" -> ";
        n=n->Next;
    }
    cout<<endl;

}


int countLength(Node *&head){
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->Next;
        count++;
    }
    return count;
}


int main(){
    

    Node *head=NULL;
    int value;
    cout<<"Choice 1: Insert At Head: "<<endl;
    cout<<"Choice 2: Insert At Tail: "<<endl;
    cout<<"Choice 0: Exit: "<<endl;
    cout<<"Enter Your Choice: ";
    int ch;
    cin>>ch;
    while(ch!=0){
        cout<<"Enter the value: ";
        cin>>value;
        if(ch==1)
        insertAtHead(head, value);
        else if(ch==2)
        insertAtTail(head, value);
        cout<<"Next choice: ";
        cin>>ch;
    }
    cout<<"Linked list"<<endl;
    display(head);
    cout<<"Length of linked list"<<endl;
    cout<<countLength(head);

    return 0;
}