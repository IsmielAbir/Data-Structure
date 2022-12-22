#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node *Next;
    
    Node(int val){
        value = val;
        Next = NULL;
    }
};


void insertAtHead(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->Next=head;
    head=newNode;
}


void insertAtTail(Node *&head, int val){
    Node *newNode = new Node(val);
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

void insertAtSpecificPosition(Node *&head, int pos, int val){
    int i=0;
    Node *temp=head;
    while(i<pos-2){
        temp=temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next=temp->Next;
    temp->Next=newNode;
}

int searchValue(Node *&head, int key){
    Node *temp=head;
    int count = 1;
    if(temp==NULL){
        return -1;
    }
    while(temp->value!=key){
        if(temp->Next==NULL){
            return -1;
        }
        temp=temp->Next;
        count++;
    }
    return count;
}


void insertAfterSpecificValue(Node *&head, int searching, int value){
    int position;
    position = searchValue(head, searching);
    insertAtSpecificPosition(head, position+1, value);
}


void insertBeforeSpecificValue(Node *&head, int searching, int value){
    int position;
    position = searchValue(head, searching);
    insertAtSpecificPosition(head, position-1, value);
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
    int count = 0 ;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->Next;
        count++;
    }
    return count;
}


void deleteAtHead(Node *&head){
    Node *temp=head;
    if(temp!=NULL){
        head=temp->Next;
        delete temp;
    }
    else
    cout<<"Its underflow"<<endl;
}

void deleteAtTail(Node *&head){
    Node *temp=head;
    if(temp!=NULL  && temp->Next!=NULL){
        while(temp->Next->Next!=NULL){
            temp=temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next=NULL;
        delete delNode;
        
    }
    else{
   
    if(temp==NULL)
    cout<<"Its underflow"<<endl;
    else
        deleteAtHead(head);

    }
}

void deletionAtSpecificPosition(Node *&head, int position){
    Node *temp=head;
    if(position<countLength(head)){
    if(position==1)
    deleteAtHead(head);
    else if(position==countLength(head))
    deleteAtTail(head);
    else{
        int i=1;
        while(i<position-1){
            temp=temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next=delNode->Next;
        delete delNode;
    }
    }
    else
    cout<<"Position Out of Bound"<<endl;
}


int main()
{
    
    Node *head=NULL;
    cout<<"Choice 1: Insert At Head"<<endl;
    cout<<"Choice 2: Insert At Tail"<<endl;
    cout<<"Choice 3: Insert Any position"<<endl;
    cout<<"Choice 4: Search value"<<endl;
    cout<<"Choice 5: Insert after a specific value"<<endl;
    cout<<"Choice 6: Insert before a specific value"<<endl;
    cout<<"Choice 7: Delete At Head"<<endl;
    cout<<"Choice 8: Delete At Tail"<<endl;
    cout<<"Choice 9: Delete At Specific Position"<<endl;

    cout<<"Choice 0: End"<<endl;
    
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    while(choice!=0){
        switch(choice){
            int value, pos, search, position;
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
            cout<<"Enter the position: ";
            cin>>pos;
            cout<<"Enter the value: ";
            cin>>value;
            insertAtSpecificPosition(head, pos, value);
            break;
            case 4: 
            
            cout<<"Enter the value: ";
            cin>>value;
            pos = searchValue(head, value);
            if(pos==-1)
            cout<<"Not found"<<endl;
            else
            cout<<"Value found at index: "<<pos<<endl;
            break;
            case 5: 
            cout<<"Enter the Search Value: ";
            cin>>search;
            cout<<"Enter the value: ";
            cin>>value;
            insertAfterSpecificValue(head, search, value);
            break;
            case 6: 
            cout<<"Enter the Search Value: ";
            cin>>search;
            cout<<"Enter the value: ";
            cin>>value;
            insertBeforeSpecificValue(head, search, value);
            break;
            case 7: 
            deleteAtHead(head);
            case 8: 
            deleteAtTail(head);
            break;
            case 9: 
            if(head==NULL){
                cout<<"underflow"<<endl;
                break;
                
            }
            else{
            cout<<"Enter the position: ";
            cin>>position;
            deletionAtSpecificPosition(head, position);
            display(head);
            break;
            }
            default:
            break;
            
        }
        cout<<"Next Choice: ";
        cin>>choice;
    }
    cout<<"The Following Linked List is---"<<endl;
    display(head);
    cout<<"Length of the folllowing Linked List is: ";
    cout<<countLength(head);
    

    return 0;
}