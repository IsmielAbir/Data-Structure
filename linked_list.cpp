#include <iostream>
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
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
        
    }
    Node *temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=newNode;
    
}

void insertAtHead(Node *&head, int val){
    Node *newNode= new Node(val);
    newNode->Next =head;
    head=newNode;
}

void display(Node *n)
{
    while(n!=NULL){
        cout<<n->value;
        if(n->Next!=NULL)
        cout<<" -> ";
        n=n->Next;
    }
    cout<<endl
        <<endl;
}

int main()
{
    Node *head=NULL;
    int value;
    cout<<"Choice 1: Insertion at Head"<<endl;
    cout<<"Choice 2: Insertion at Tail"<<endl;
    cout<<"Choice 0: Exit"<<endl;
    cout<<endl;
    cout<<"Next Choice: ";
    int Choice;
    cin>>Choice;
    while(Choice!=0){
        cout<<"Enter the value: ";
        cin>>value;
        if(Choice==1)
        insertAtHead(head, value);
        else if(Choice==2)
        insertAtTail(head, value);
        cout<<"Next Choice: ";
        cin>>Choice;
        
    }
    display(head);

    return 0;
}