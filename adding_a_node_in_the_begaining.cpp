// Day 1 coding challenges  creating node in DSA
#include <iostream>
using namespace std;
struct Node
{
    Node *next;
    int data;
};

Node *Adding_at_starting(Node *head, int value)
{
    Node *new_head= new Node;
    new_head->data=value;
    new_head->next=head;
    return new_head;

}
int main()
{
    // creating node and allocting dynamic memory
    struct Node *head = new Node;
    struct Node *second = new Node;
    struct Node *third = new Node;
    // asssigning the value to the node and Liinking the nodes
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    
    head=Adding_at_starting(head,55);
    cout<<head->data;
    return 0;
}