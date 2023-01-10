#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Constructor

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

 void insertNode()

int main(){


    Node* node1=new Node(45);
    Node* head =node1;

    cout<<node1->data;






    return 0;
}