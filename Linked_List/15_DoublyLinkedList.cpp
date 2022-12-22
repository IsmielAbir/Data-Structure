#include <iostream>
using namespace std;


class doublyNode{
    public:
    int value;
    doublyNode *next;
    doublyNode *prev;
    
    doublyNode(int val){
        value=val;
        prev = NULL;
        next =NULL;
        
    }
};


void insertAtTail(doublyNode *&head, int val){
    doublyNode *newNode = new doublyNode(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    doublyNode *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=newNode;
    newNode->prev=temp;
}

void insertAtHead(doublyNode *&head, int val){
    doublyNode *newNode = new doublyNode(val);
    head->prev=newNode;

    newNode->next=head;
    head=newNode;
}


void display(doublyNode *n){
    while(n!=NULL){
        cout<<n->value;
        if(n->next!=NULL)
        cout<<" -> ";
        n=n->next;
    }
    cout<<endl;
}


void displayReverse(doublyNode *&head){
    doublyNode *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    
    while(temp!=NULL){
        cout<<temp->value;
        if(temp->prev!=NULL)
        cout<<" -> ";
        temp=temp->prev;
    }
    cout<<endl;
}


int countLength(doublyNode *&head){
    int count = 0 ;
    doublyNode *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}



int main()
{
    
    doublyNode *head=NULL;
    cout<<"Choice 1: Insert At Head"<<endl;
    cout<<"Choice 2: Insert At Tail"<<endl;
    cout<<"Choice 3: Reverse the Doubly Linked List"<<endl;

    cout<<"Choice 0: End"<<endl;
    
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    while(choice!=0){
        switch(choice){
            int value;
            case 1: 
            cout<<"Enter the value: ";
            cin>>value;
            insertAtHead(head, value);
            break;
            case 2: 
            cout<<"Enter the value: ";
            cin>>value;
            insertAtTail(head, value);
            break;
            case 3:
            displayReverse(head);
            break;
            default:
            break;
        }
        cout<<"Next Choice: ";
        cin>>choice;
    }
    
    cout<<"The Following Doubly Linked List is---"<<endl;
    display(head);
    cout<<"Length of the folllowing Doubly Linked List is: ";
    cout<<countLength(head);
    

    return 0;
}