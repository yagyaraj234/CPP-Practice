#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this ->data=data;
        this ->next=NULL;
    }


};
void atStart(Node* &head,int data){
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
}
void atEnd(Node* &head,int data){
    // Node* temp=new Node(9);
    // head->next=temp;
    // // tail=temp->next;

    Node *temp;
    Node* end =new Node(data);
    temp=head;
    end->data=data;
    end->next=NULL;
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=end;  
    
}

void atMid(Node* &head,int data,int pos){

        // Case for we have to insert at start
        if(pos==1){
            atStart(head,data);
            return;
        }
    Node *temp=head;
    int newPos=pos-1;
    int cnt=1;
    while (cnt!=newPos)
    {
        temp=temp->next;
        cnt++;
    }
        if (temp->next==NULL)
        {
            atEnd(head,data);       // Case to update tail for end
            return;
        }
        

    Node *midData = new Node(data);
    midData->next=temp->next;
    temp->next=midData;
    
}
void traverse(Node* &head){
    Node* temp=head;
    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    Node *node1= new Node(5);
    Node *head=node1;
    traverse(head);
    cout<<endl<<endl;

    cout<<"------------------- Insertion on head -----------------------"<<endl<<endl;

    // Node *tail=node4;
    atStart(head,24);
    traverse(head);
    cout<<endl;
    atStart(head,34);
    traverse(head);
    cout<<endl;
    atStart(head,544);
    traverse(head);
    cout<<endl<<endl;

    cout<<" ------------------ Insertion at End ------------------"<<endl<<endl;

    atEnd(head,67);
    traverse(head);
    cout<<endl;
    atEnd(head,66);
    traverse(head);
    cout<<endl;
    atEnd(head,36);
    traverse(head);
    cout<<endl<<endl;

    cout<<" -------------------- Insertion at Mid --------------------------"<<endl;


    atMid(head,56,4);
    traverse(head);
    cout<<endl;
    atMid(head,34,3);
    traverse(head);
    cout<<endl;

    





    return 0;
}