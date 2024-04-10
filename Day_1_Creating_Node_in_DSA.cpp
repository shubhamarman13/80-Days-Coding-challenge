// Day 1 coding challenges  creating node in DSA
#include <iostream>
using namespace std;
struct Node
{
    Node *next;
    int data;
};
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
    // Displaying the Nodes
    cout << head->data << endl;
    cout << second->data << endl;
    cout << third->data << endl;
    return 0;
}