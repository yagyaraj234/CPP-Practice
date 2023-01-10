#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    //Constructor
    node(int data){
        this ->data=data;
        this ->next=NULL;
    } 
};

void insertAtStart(node* &head,int data ){

    node* temp = new node(data);
    temp -> next =head;
    head=temp;

    // travarse(head);
}

void travarse(node* &head){

    node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}


int main(){

    node *node1 = new node(5);
    cout<<node1->data<<endl;
    node* head =node1;
    insertAtStart(head,45);
    insertAtStart(head,35);
    insertAtStart(head,25);
    travarse(head);
    cout<<endl;
    insertAtStart(head,32);
    insertAtStart(head,63);
    insertAtStart(head,89);

    travarse(head);
    // cout<<node1->next<<endl;



    return 0;
}