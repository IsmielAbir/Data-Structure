#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node *Next;

};

void display(Node *n){
    while(n!=NULL){
        cout<<n->value;
        if(n->Next!=NULL)
        cout<<" -> ";
        n=n->Next;

    }
}


int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->value = 10;
    second->value = 12;
    third->value = 16;
    fourth->value = 18;

    head->Next=second;
    second->Next=third;
    third->Next=fourth;
    fourth->Next=NULL;


    display(head);

    

    return 0;
}