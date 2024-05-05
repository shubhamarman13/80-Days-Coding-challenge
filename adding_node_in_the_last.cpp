#include<iostream>
using namespace std;
struct Node
{
    Node *next;
    int data; 
};
struct Node display(Node *ptr)
{
    if (ptr==NULL)
    {
    
        cout<<"Linked list is empty"<<endl;
    }
    
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;

    }
}
struct Node *Insert_Node_In_The_Last( Node *head,int value )
{

    Node *new_node= new Node;
    new_node->data= value;
    new_node->next=NULL;
    Node *ptr = head;
    if (ptr==NULL)
    {
        return new_node;
    }
    
    while (ptr->next!=NULL)
    {
        ptr= ptr->next;
    }
    ptr->next=new_node;
    return head;

}
int main()
{
    struct Node *head= new Node;
    struct Node *first= new Node;
    struct Node *second= new Node;
    struct Node *third= new Node;

// head=NULL;
head->data=11;
head->next=first;
first->data= 12;
first->next=second;
second->data=13;
second->next= third;
third->data= 14;
third->next=NULL;
display(head);
 Insert_Node_In_The_Last(head,55);
head= Insert_Node_In_The_Last(head,55);
display(head);/ cout<<third->next;

}