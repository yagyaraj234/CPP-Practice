#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    // Constructor 
    node(int data){
        this->data;
        this->next=NULL;
    }

};

void deletefromStart(node* &head){

    node* temp=head;
    temp->next=head;

}

void insertAtEnd(node* &tail,int d){
    node* temp = new node(d);
    temp->next=NULL;
    tail->next =temp;
    tail=tail->next;

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
    // cout<<node1->data<<endl;
    node* head =node1;
    node* tail=node1;
    travarse(head);
    cout<<endl;
    insertAtEnd(tail,45);
    insertAtEnd(tail,22);
    insertAtEnd(tail,32);
    travarse(head);
    cout<<endl;
    cout<<endl;


    return 0;
}