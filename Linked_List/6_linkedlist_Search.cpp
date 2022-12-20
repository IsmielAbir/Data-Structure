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


void insertAtSpecificPosition(Node *&head, int pos, int val){
    int i=0;
    Node *temp=head;
    while(i<pos-2){
        temp=temp->Next;
        i++;
    }
    Node *newNode=new Node(val);
    newNode->Next=temp->Next;
    temp->Next=newNode;


}


int searchValue(Node *&head, int key){
    Node *temp=head;
    int count =1;
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

int main(){

    Node *head=NULL;

    cout<<"Choice 1: Insert At Head"<<endl;
    cout<<"Choice 2: Insert At Tail"<<endl;
    cout<<"Choice 3: Insert At Specific Posotion"<<endl;
    cout<<"Choice 4: Search value"<<endl;

    cout<<"Choice 0: Exit"<<endl;
    cout<<"Enter Your Choice: ";
    int ch, value, pos;
    cin>>ch;
    while(ch!=0){
        switch(ch){
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
                cout<<"Enter the specific position: ";
                cin>>pos;
                cout<<"Enter the value: ";
                cin>>value;
                insertAtSpecificPosition(head, pos, value);
                break;
            case 4:
                cout<<"Enter the value of searching :";
                cin>>value;
                 pos= searchValue(head, value);
                if(pos!=-1)
                cout<<"Found in the position of: "<<pos<<endl;
                else
                cout<<"Not found"<<endl;
                break;  
            default:
                break;


        }
        
        cout<<"Next Choice: ";
        cin>>ch;

    }
    cout<<"Linked list is---"<<endl;
    display(head);
    cout<<"Length if linked list is---"<<endl;
    cout<<countLength(head)<<endl;



    return 0;
}
