#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    // constructor
     Node(int data){
        this->data=data;
        this->next=NULL;
     }

     // Destructor
     ~Node(){
        int value =this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data "<<value<<endl;
     }
};

    void traverse(Node* & head){
        Node *temp=head;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
    void atHead(Node* &head,int data){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;

    }
    void deleteFromStart(Node* &head){
        Node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    void deleteFromLast(Node* &head){
        
        Node *temp=head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        

    }
    void deleteFromMid(Node* &head,int pos){
            if(pos==1){
                deleteFromStart(head);
                return;
            }
            else{
                Node *curr=head;
                Node *prev=NULL;

                int cnt=1;
                while (cnt<pos)
                {
                    prev=curr;
                    curr=curr->next;
                    cnt++;
                }
                prev->next = curr->next;
                curr->next=NULL;
                delete curr;
            }
        
    }
int main(){

    Node *node1=new Node(5);
    Node *head=node1;
    atHead(head,45);
    atHead(head,56);
    atHead(head,25);
    atHead(head,646);
    atHead(head,4);
    atHead(head,589);

    traverse(head);
    cout<<endl;
    cout<<"after deleting First Element"<<endl;

    // deleteFromStart(head);
    deleteFromMid(head,1);
    traverse(head);
    cout<<endl;
    // deleteFromStart(head);
    deleteFromMid(head,5);
    traverse(head);
    cout<<endl;
    deleteFromLast(head);
    traverse(head);
    cout<<endl;
    deleteFromMid(head,4);
    traverse(head);





    return 0;
}