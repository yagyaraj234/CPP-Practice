#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        // cout<<"data ";
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtStart(Node *&head, int data)
{
    Node *temp = new Node(data);
    // temp=head;
    temp->prev = temp;
    temp->next = head;
    head = temp;
}

void deleteFromStart(Node *&head)
{
    Node *temp = head;
    Node *temp2 = head->next;
    temp2->prev = NULL;
    head = temp2;
}

void deleteFromEnd(Node *&head)
{
    if (head->next==NULL && head->prev==NULL)
    {
        cout<<head;
        free(head);
    }
    

    Node *temp, *temp2;
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->next;
    temp2->prev = NULL;
    temp->next = NULL;
    free(temp2);
}
void deleteFromMid(Node* &head,int pos){

    if(pos==1){
        deleteFromStart(head);
        return;
    }
    Node *temp=head;
    Node *temp2=NULL;
    int cnt=1;
    
    while (cnt < pos)
    {
        temp2=temp;
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        deleteFromEnd(head);
        return;
    }
    else{
    // temp2->next=temp->next;
    // temp->next=NULL;
    // temp2=temp->next->prev;
    // temp=NULL;
    temp->prev=NULL;
    temp2->next=temp->next;
    temp->next=NULL;
    }

}
int main()
{

    cout << endl
         << "----------------- Deletion in Doubly Linked List -----------------" << endl
         << endl;

    Node *node1 = new Node(56);
    Node *head = node1;
    insertAtStart(head,22);
    insertAtStart(head,90);
    insertAtStart(head,54);
    insertAtStart(head,5);
    insertAtStart(head,42);
    insertAtStart(head,92);
    traverse(head);
    deleteFromStart(head);
    traverse(head);
    cout << "Delete from End" << endl;
    deleteFromEnd(head);
    traverse(head);
    deleteFromEnd(head);
    traverse(head);
    cout << "Delete from Mid" << endl;
    deleteFromMid(head,2);
    traverse(head);

    return 0;
}