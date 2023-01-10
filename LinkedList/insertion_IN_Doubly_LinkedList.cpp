#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Printing the data of Linked List
void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void getLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}

void insertAtStart(Node *&head, int data)
{
    Node *temp = new Node(data);
    // temp=head;
    temp->prev = temp;
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&head, int data)
{
    Node *end = new Node(data);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    end->prev = temp;
    end->next = NULL;
    temp->next = end;
}
void insertAtMid(Node *&head, int pos, int data)
{

    cout<<"inserting at position : "<<pos<<endl;
    if (pos==1)
    {
        insertAtStart(head,data);
        return;
    }
    Node* temp=head;
    Node* temp2=head;
    int cnt=1;
    while (cnt!=pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    while (cnt!=pos)
    {
        temp2=temp2->next;
        cnt++;
    }
    Node* insertEl=new Node(data);
    temp2=temp->next;
    temp->next=insertEl;
    insertEl->next=temp2;
    temp2->prev=insertEl;
    insertEl->prev=temp;
    
}

int main()
{

    Node *node1 = new Node(54);
    Node *head = node1;
    traverse(head);
    getLength(head);

    insertAtStart(head, 34);
    insertAtStart(head, 454);
    traverse(head);

    insertAtEnd(head, 56);
    traverse(head);
    insertAtEnd(head, 546);
    traverse(head);

    insertAtMid(head, 4, 45);
    traverse(head);
    insertAtMid(head, 2, 67);
    traverse(head);

    return 0;
}